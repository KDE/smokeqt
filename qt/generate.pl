#!/usr/bin/perl -w

## Run this first, to generate the x_*.cpp files from the Qt headers
## using kalyptus

my $kalyptusdir = "../../kalyptus";

use File::Basename;

my $here = `pwd`;
chomp $here;
my $outdir = $here . "/generate.pl.tmpdir";
my $finaloutdir = $here;
my $defines = "qtdefines";
my $definespath = "$here/$defines";

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

# Need to cd to kalyptus's directory so that perl finds Ast.pm etc.
chdir "$kalyptusdir" or die "Couldn't go to $kalyptusdir (edit script to change dir)\n";

# Find out which header files we need to parse
# We don't want all of them - e.g. not template-based stuff
my %excludes = (
    'qaccessible.h' => 1,  # Accessibility support is not compiled by defaut
    'qxt.h' => 1, # Xt
    'qxtwidget.h' => 1, # Xt
    'qmotif.h' => 1, # Motif
    'qmotifdialog.h' => 1, # Motif
    'qmotifwidget.h' => 1, # Motif
    'qgl.h' => 1, # OpenGL
    'qglcolormap.h' => 1, # OpenGL
    'qnp.h' => 1, # NSPlugin
    'qdns.h' => 1, # internal
    'qttableview.h' => 1,  # Not in Qt anymore...
    'qtmultilineedit.h' => 1,  # Not in Qt anymore...
    'qwidgetfactory.h' => 1,  # Part of designer uilib, not of qt
    'qassistantclient.h' => 1,  # Part of assistant lib, not of qt
    'qsharedmemory.h' => 1 # "not part of the Qt API" they say
);

# List Qt headers, and exclude the ones listed above
my @headers = ();
$qtinc=$ENV{"QTDIR"} . "/include";
opendir (QT, $qtinc) or die "Couldn't find $qtinc";
foreach $filename (readdir(QT)) {
    $entry = $qtinc."/".$filename;
    if ( ( -e $entry or -l $entry )         # A real file or a symlink
        && ( ! -d _ ) )                     # Not a symlink to a dir though
    {
        push(@headers, $entry)
          if ( !defined $excludes{$filename} # Not excluded
	      && $filename =~ /\.h$/ ); # Not a backup file etc. Only headers.
    }
}
closedir QT;

# Launch kalyptus
system "perl kalyptus @ARGV -fsmoke --name=qt $macros --outputdir=$outdir @headers";
my $exit = $? >> 8;
exit $exit if ($exit);

# Generate diff for smokedata.cpp
system "diff -u $finaloutdir/smokedata.cpp $outdir/smokedata.cpp > $outdir/smokedata.cpp.diff";

# Copy changed or new files to finaloutdir
opendir (OUT, $outdir) or die "Couldn't opendir $outdir";
foreach $filename (readdir(OUT)) {
    next if ( -d "$outdir/$filename" ); # only files, not dirs
    my $docopy = 1;
    if ( -f "$finaloutdir/$filename" ) {
        # How can I do a fast file compare in perl?
        system "cmp -s $outdir/$filename $finaloutdir/$filename";
	$docopy = ($?>>8);  # 0 if files identical, 1 if different
    }
    if ($docopy) {
	#print STDERR "Updating $filename...\n";
	system "cp -f $outdir/$filename $finaloutdir/$filename";
    }
}
closedir OUT;

# Check for deleted files and warn
my $deleted = 0;
opendir(FINALOUT, $finaloutdir) or die "Couldn't opendir $finaloutdir";
foreach $filename (readdir(FINALOUT)) {
    next if ( -d "$finaloutdir/$filename" ); # only files, not dirs
    if ( $filename =~ /.cpp$/ && ! ($filename =~ /_la_closure.cpp/) && ! -f "$outdir/$filename" ) {
      print STDERR "$filename appears to be deleted.   cvs remove -f $filename\n";
      $deleted = 1;
    }
}
closedir FINALOUT;
print STDERR "Run ./generate_makefile_am.pl after removing files.\n" if ($deleted);

# Delete outdir
system "rm -rf $outdir";

# Update list of source files in $outdir/Makefile.am
chdir $finaloutdir;
exec "perl ./generate_makefile_am.pl";
