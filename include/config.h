/*
    C-Dogs SDL
    A port of the legendary (and fun) action/arcade cdogs.
    Copyright (C) 1995 Ronny Wester
    Copyright (C) 2003 Jeremy Chin 
    Copyright (C) 2003-2007 Lucas Martin-King 

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

-------------------------------------------------------------------------------

 config.h - installation options/settings
 
 Author: $Author: lmartinking $
 Rev:    $Revision: 250 $
 URL:    $HeadURL: svn://svn.icculus.org/cdogs-sdl/trunk/src/include/config.h $
 ID:     $Id: config.h 250 2007-07-06 16:38:43Z lmartinking $
 
*/

/* where to look for the cdogs data files */

#ifndef CDOGS_DATA_DIR
	#define CDOGS_DATA_DIR "./data/"
#endif

#ifndef CDOGS_CFG_DIR
	#if defined (SYS_WIN) || SYS_PSP || SYS_NDS
		#define CDOGS_CFG_DIR "./config/"
	#else
		#define CDOGS_CFG_DIR ".cdogs/"
	#endif
#endif

#ifndef CDOGS_MUSIC_DIR
	#define CDOGS_MUSIC_DIR "./music/"
#endif
