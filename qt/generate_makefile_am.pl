#!/usr/bin/perl -w

use File::Basename;

my $here = `pwd`;
chomp $here;
my $outdir = $here;
my $tempfile = "$outdir/.Makefile.am.tmpfile";

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

open( MAKEFILE, ">$tempfile" ) or die;
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

system "cmp -s $tempfile $outdir/Makefile.am";
if ($? >> 8) {
    system "cp -f $tempfile $outdir/Makefile.am";
    print STDERR "Makefile.am updated.\n";
}
else {
    print STDERR "Makefile.am unchanged.\n";
}
system "rm -f $tempfile";

exit 0;
