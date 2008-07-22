#!/usr/bin/perl -w

## Run this first, to generate the x_*.cpp files from the Qt headers
## using kalyptus

my $kalyptusdir = "@CMAKE_CURRENT_SOURCE_DIR@/../../kalyptus";

use File::Basename;
use File::Copy qw|cp|;
use File::Compare;
use File::Find;
use Cwd;

my $here = getcwd;
my $outdir = $here . "/generate.pl.tmpdir";
my $finaloutdir = $here;
my $defines = "qtdefines";
my $headerlist = "@CMAKE_CURRENT_SOURCE_DIR@/header_list";
my $definespath = "$here/../$defines";
my $headerlistpath = "$headerlist";

my $phononheaderlist = "@CMAKE_CURRENT_SOURCE_DIR@/phonon_header_list";
my $phononheaderlistpath = "$here/$phononheaderlist";

## If srcdir != builddir, use headerlist from src
$headerlistpath = $headerlist if ($headerlist =~ /^\//);
$phononheaderlistpath = $phononheaderlist if $phononheaderlist =~ /^\//;

## Note: outdir and finaloutdir should NOT be the same dir!

# Delete all x_*.cpp files under outdir (or create outdir if nonexistent)
if (-d $outdir) { system "rm -f $outdir/x_*.cpp"; } else { mkdir $outdir; }

mkdir $finaloutdir unless (-d $finaloutdir);

#  Load the QT_NO_* macros found in "qtdefines". They'll be passed to kalyptus
my $macros="";
if ( -e $definespath ){
    print "Found '$defines'. Reading preprocessor symbols from there...\n";
    $macros = " --defines=$definespath ";
}

mkdir $kalyptusdir, 0777;
# Need to cd to kalyptus's directory so that perl finds Ast.pm etc.
chdir "$kalyptusdir" or die "Couldn't go to $kalyptusdir (edit script to change dir)\n";



# Some systems have a QTDIR = KDEDIR = PREFIX
# We need a complete list

my %includes;
open(HEADERS, $headerlistpath) or die "Couldn't open $headerlistpath: $!\n";
map { chomp ; $includes{$_} = 1 } <HEADERS>;
close HEADERS;


# Some systems have a QTDIR = KDEDIR = PREFIX
# We need a complete list

my %kdeincludes;

open(HEADERS, $phononheaderlistpath) or die "Couldn't open $phononheaderlistpath: $!\n";
map { chomp ; $kdeincludes{$_} = 1 unless /^\s*#/ } <HEADERS>;
close HEADERS;

# List Qt headers, and exclude the ones listed above
my @headers = ();

@qtinc= (@qt_incs@);

find(
    {   wanted => sub {
	    (-e || -l and !-d) and do {
	        $f = $_;
                if( $includes{$f}        # Known header
                     && /\.h$/)     # Not a backup file etc. Only headers.
                {
                    my $header = $File::Find::name;
                    if ( $header !~ /src/ ) {
                        open(FILE, $header);
                        my @header_lines = <FILE>;
                        if (@header_lines == 1) {
                            $line = $header_lines[0];
                            if ($line =~ /^#include "(.*)"/) {
                                push ( @headers, $File::Find::dir . substr($1, 2) );
                            } else {
                                push ( @headers, $header );
                            }
                        } else {
                            push ( @headers, $header );
                        }
					}
                }
	    	undef $includes{$f}   
	     };
	},
	follow_fast => 1,
	follow_skip => 2,
	no_chdir => 0
    }, @qtinc
);

my @kdeheaders = ();
$kdeprefix = "@KDE_PREFIX@";
$kdeinc= ('@kde_includes@', '@PHONON_INCLUDE_DIR@' );
$kdeinc =~ s/\${prefix}/$kdeprefix/; # Remove ${prefix} in src != build
-d $kdeinc or die "Couldn't process $kdeinc: $!\n";

find(
    {   wanted => sub {
	    (-e || -l and !-d) and do {
	        $f = substr($_, 1 + length $kdeinc);
                push ( @kdeheaders, $_ )
	    	  if( $kdeincludes{$f}        # Known header
	    	     && /\.h$/);     # Not a backup file etc. Only headers.
	    	undef $kdeincludes{$f}   
	     };
	},
	follow_fast => 1,
	follow_skip => 2,
	no_chdir => 1
    }, $kdeinc
 );

# Launch kalyptus
chdir "../smoke/phonon";
system "perl -I@kdebindings_SOURCE_DIR@/kalyptus @kdebindings_SOURCE_DIR@/kalyptus/kalyptus @ARGV --qt4 --globspace -fsmoke --name=phonon --init-modules=qt --classlist=@CMAKE_CURRENT_SOURCE_DIR@/classlist $macros --no-cache --outputdir=$outdir @headers @kdeheaders";
my $exit = $? >> 8;
exit $exit if ($exit);
chdir "$kalyptusdir";

# Generate diff for smokedata.cpp
unless ( -e "$finaloutdir/smokedata.cpp" ) {
    open( TOUCH, ">$finaloutdir/smokedata.cpp");
    close TOUCH;
}
system "diff -u $finaloutdir/smokedata.cpp $outdir/smokedata.cpp > $outdir/smokedata.cpp.diff";

# Copy changed or new files to finaloutdir
opendir (OUT, $outdir) or die "Couldn't opendir $outdir";
foreach $filename (readdir(OUT)) {
    next if ( -d "$outdir/$filename" ); # only files, not dirs
    my $docopy = 1;
    if ( -f "$finaloutdir/$filename" ) {
        $docopy = compare("$outdir/$filename", "$finaloutdir/$filename"); # 1 if files are differents
    }
    if ($docopy) {
	#print STDERR "Updating $filename...\n";
	cp("$outdir/$filename", "$finaloutdir/$filename");
    }
}
closedir OUT;

# Check for deleted files and warn
my $deleted = 0;
opendir(FINALOUT, $finaloutdir) or die "Couldn't opendir $finaloutdir";
foreach $filename (readdir(FINALOUT)) {
    next if ( -d "$finaloutdir/$filename" ); # only files, not dirs
    if ( $filename =~ /.cpp$/ && ! ($filename =~ /_la_closure.cpp/) && ! -f "$outdir/$filename" ) {
      print STDERR "Removing obsolete file $filename\n";
      unlink "$finaloutdir/$filename";
      $deleted = 1;
    }
}
closedir FINALOUT;

# Delete outdir
system "rm -rf $outdir";

