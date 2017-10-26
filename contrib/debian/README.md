
Debian
====================
This directory contains files used to package mashhadbitd/mashhadbit-qt
for Debian-based Linux systems. If you compile mashhadbitd/mashhadbit-qt yourself, there are some useful files here.

## mashhadbit: URI support ##


mashhadbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mashhadbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mashhadbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/mashhadbit128.png` to `/usr/share/pixmaps`

mashhadbit-qt.protocol (KDE)

