
Debian
====================
This directory contains files used to package patentd/patent-qt
for Debian-based Linux systems. If you compile patentd/patent-qt yourself, there are some useful files here.

## patent: URI support ##


patent-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install patent-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your patentqt binary to `/usr/bin`
and the `../../share/pixmaps/patent128.png` to `/usr/share/pixmaps`

patent-qt.protocol (KDE)

