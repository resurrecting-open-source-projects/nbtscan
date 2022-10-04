# NBTscan

**NBTscan - scan networks for NetBIOS name information**

## Help this project

NBTscan needs your help. **If you are a programmer** and if you want to help a
nice project, this is your opportunity.

NBTscan was imported from some tarballs, the [original homepage][1] and
developers are inactive. After this, all patches found in the Debian project and
other places for this program were applied. All initial work was registered in the
[ChangeLog file](ChangeLog) (version 1.6 and later releases). NBTscan is being packaged
in the [Debian project][2].

If you are interested to help NBTscan, read the [CONTRIBUTING.md](CONTRIBUTING.md) file.

## What is NBTscan?

NBTscan is a program for scanning IP networks for NetBIOS name information.
It sends NetBIOS status queries to each address in the supplied range and lists
received information in human-readable form. For each responding host it lists
IP address, NetBIOS computer name, logged-in user name and MAC address (such
as Ethernet).

## Build and Install

To build and install, run the following commands:

    $ ./autogen.sh
    $ ./configure
    $ make
    # make install

To return to the original source code, you can use `$ make distclean`.

On Debian systems, you can use `# apt install nbtscan`.

## Author

NBTscan was originally developed by Alla Bezroutchko under the GPL-2+ license.

Currently, the source code and newer versions are available on [GitHub][3]


[1]: https://web.archive.org/web/20210126110758/http://www.inetcat.org/software/nbtscan.html
[2]: https://tracker.debian.org/pkg/nbtscan
[3]: https://github.com/resurrecting-open-source-projects/nbtscan
