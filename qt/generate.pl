#!/usr/bin/perl -w

## Run this first, to generate the x_*.cpp files from the Qt headers
## using kalyptus

my $kalyptusdir = "../../kalyptus";

use File::Basename;

my $here = `pwd`;
chomp $here;
my $outdir = $here;

# Also delete all x_*.cpp files under outdir
if (-d $outdir) { system "rm -f $outdir/x_*.cpp"; } else { mkdir $outdir; }

# Need to cd to kalyptus's directory so that perl finds Ast.pm etc.
chdir "$kalyptusdir" or die "Couldn't go to $kalyptusdir (edit script to change dir)\n";

# Find out which header files we need to parse
# We don't want all of them - e.g. not template-based stuff
my %excludes = (
    'qaccessible.h' => 1,  # Accessibility support is not compiled by defaut
    'qxt.h' => 1, # Xt
    'qgl.h' => 1, # OpenGL
    'qnp.h' => 1, # NSPlugin
    'qttableview.h' => 1,  # Not in Qt anymore...
    'qtmultilineedit.h' => 1,  # Not in Qt anymore...
    'qwidgetfactory.h' => 1  # Just an interface
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
          if ( !defined $excludes{$filename} ); # Not excluded
    }
}
closedir QT;


# Launch kalyptus
# Then update list of source files in $outdir/Makefile.am
exec "perl kalyptus @ARGV -fsmoke --outputdir=$outdir @headers && cd $here && perl ./generate_makefile_am.pl";
