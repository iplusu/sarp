/*****************************************
*
*   Prepared date: 01/18/2009
*   Last updated:  1/28/2009
*   Prepared by:   Kenneth Rahn Jr
*
******************************************/

The current routing algorithm is in the following tarball

  Sarp.tar.gz

It can be extracted using the following command:

  tar -xzvf Sarp.tar.gz

When extracted, it will create a directory called "Sarp".  Inside that
directory will be all the files for the current build.  See below version
history for build updates.

There are two verions of the makefile, Makefile.pc amd Makefile.telosb.  The
only difference between the is the Makefile.telosb specifies one "define" on
the command line, -D__REAL__MOTE__ .  Im SarpM.nc, and sarp.nc, there are
lines that apply only to the CC2420 radio.  When compiling for the pc
(TOSSIM), it has no concept of a radio, and so those lines that refer to the
CC2420 cause the compile to fail.

By using #ifdef....#endif statements in Sarp.nc and SarpM.nc and the
__REAL__MOTE__ define compile flag, we can have one version of the file
compiile for two different targets.  This is much neater and cleaner than the
previous solution of having two versions of each file.

We have created two executable script files, "make_pc" and "make_telosb",
which can be run with the following commands.

./make_pc
./make_telosb

These files copy either Makefile.pc or Makefile.telosb to Makefile, and then
execute either "make pc" or "make telosb" and the application will build for
the appropriate target and with the appropriate code base.

Should any more telosb-specific code be added to the code base, just be sure
to surround the code with the "#ifdef __REAL__MOTE__ ...else...#endif" construct.

There is also a "make_archive" command that will make the appropriate tarball
of all of the files in the current directory.  it can be executed with:

./make_archive

Note:  If you do not already have a Makerules file up one directory, you will
need to COPY the included Makerules file there before building !


/********************
*
*   VERSION HISTORY
*
*********************/

Build 0.1, 01/18/2009, Kenneth Rahn Jr:

- Cleaned up and tailored exisiting code base to reflect this mission
- Made the "save" and "load" functionality
- Tested the "pc" build in TOSSIM
- Tested the "telos" build on TelosB motes

Build 0.2, 01/28/2009, Kenneth rahn Jr:

- Changed the name from Coloring to Sarp
- The user now has one version of Sarp.nc and SarpM.nc to edit, not two
- Added "make_archive" for consistent archiving

Build 0.16, 040702009, by Kenneth Rahn Jr

- Many commits missed entries in build log
- Working simulation that routes using trust values
- Bug fix for system gumming up after "n" transactions
- Current work is simulations
