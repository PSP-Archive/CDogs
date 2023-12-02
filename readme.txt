2008/01/15 - cdogsPSP v0.1.3.80
- Requires 3.x M33 and is compatible with 3.80 M33.  No other changes.

2007/08/19 - cdogsPSP v0.1 - first release
--------------------------
This is a port of the classic cdogs (cyberdogs 2) to Sony PSP.
It's a gauntlet style shooter.  You walk around shooting enemies and
collecting items for missions.

At the moment it only runs at around 13 FPS.  This is mainly because it's
scaling 320x240 to 640x480 and then SDL is scaling it to 480x272.  I
tried running with the scaling disabled but the display just gets
messed up (probably a bug/missing feature in PSP SDL).  The sound is
really quiet and settings aren't saved.

Original Code Copyright Ronny Wester 1995
Game Data Copyright Ronny Wester 1995
SDL Port by Jeremy Chin and Lucas Martin-King Copyright 2003-2007
Ported to PSP by Sektor

Controls:

Move           D-pad/analog
Use weapon     Cross
Slide          Square or Circle + direction
Change weapon  Square or Circle when not moving
ESC/Cancel     Triangle
Pause          Start
Automap        Select

Links:
cdogsPSP - http://GTAMP.com/PSP
C-Dogs SDL Port - http://icculus.org/cdogs-sdl

Thanks to:
Ronny Wester, Jeremy Chin, Lucas Martin-King
TyRaNiD for PSPLink and thanks to everyone who helped create the PSPSDK and devkitPSP