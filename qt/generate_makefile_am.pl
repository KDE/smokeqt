#!/usr/bin/perl -w

use File::Basename;

my $here = `pwd`;
chomp $here;
my $outdir = $here;

# Update list of source files in $outdir/Makefile.am
open( MAKEFILE, "<$outdir/Makefile.am" ) or die;
my $makeFileData = '';
my $found = 0;
while (<MAKEFILE>) {
	if (/^libsmokeqt_la_SOURCES/)
	{
		$found = 1;
		$makeFileData .= "libsmokeqt_la_SOURCES = xdata.cpp";
	}
	$makeFileData .= $_ if (!$found);
}
close MAKEFILE;

die "libsmokeqt_la_SOURCES not found" if (!$found);

open( MAKEFILE, ">$outdir/Makefile.am" ) or die;
print MAKEFILE $makeFileData;

my $count = 0;
opendir (FILES, $outdir) or die;
foreach $filename (readdir(FILES)) {
	if ( $filename =~ /^x_.*\.cpp$/ ) {
		print MAKEFILE " $filename";
		if ( $count++ == 7 ) {
			$count = 0;
			print MAKEFILE " \\\n";
		}
	}
}

print MAKEFILE "\n";
close MAKEFILE;
closedir FILES;
print STDERR "$outdir/Makefile.am updated.\n";
exit 0;
