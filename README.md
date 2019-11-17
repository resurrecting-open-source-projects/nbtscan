# NBTscan

#### nbtscan - scan networks for NetBIOS name information

## Help this project ##

nbtscan needs your help. **If you are a programmer** and if you want to help a
nice project, this is your opportunity.

nbtscan was imported from some tarballs (the original homepage[1] and
developers are inactive). After this, all patches found in Debian project and
other places for this program were applied. All initial work was registered in
ChangeLog file (version 1.6 and later releases). nbtscan is being packaged
in Debian[2] Project.

If you are interested to help nbtscan, read the [CONTRIBUTING.md](CONTRIBUTING.md) file.

[1]: http://www.inetcat.org/software/nbtscan.html
[2]: https://tracker.debian.org/pkg/nbtscan

## What is NBTscan? ##

NBTscan is a program for scanning IP networks for NetBIOS name information.
It sends NetBIOS status query to each address in supplied range and lists
received information in human readable form. For each responded host it lists
IP address, NetBIOS computer name, logged-in user name and MAC address (such
as Ethernet).

## Build and Install ##

To build and install, run the following commands:

    $ ./autogen.sh
    $ ./configure
    $ make
    # make install

To return to original source code you can use '$ make distclean' command.

On Debian systems you can use '# apt install nbtscan'.

## Author ##

NBTscan was originally developed by Alla Bezroutchko under GPL-2+ license.

Currently, the source code and newer versions are available at
https://github.com/resurrecting-open-source-projects/nbtscan
