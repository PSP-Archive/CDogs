TARGET = CDOGSPSP
OBJS = \
	cdogs.o draw.o pics.o actors.o map.o sounds.o defs.o objs.o \
	gamedata.o ai.o triggers.o input.o prep.o hiscores.o automap.o \
	mission.o game.o mainmenu.o password.o files.o menu.o joystick.o \
	sprcomp.o grafx.o blit.o text.o keyboard.o events.o utils.o \
	drawtools.o
INCDIR = include missions

CFLAGS = -O2 -G0 -Wall -DSYS_PSP
#-DSND_SDLMIXER
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)

LIBDIR =
LDFLAGS =

EXTRA_TARGETS = EBOOT.PBP
#SCEkxploit

PSP_DIR_NAME = CDOGSPSP
PSP_EBOOT_SFO = param.sfo
PSP_EBOOT_TITLE = C-DogsPSP v0.1.3.80
PSP_EBOOT = EBOOT.PBP
PSP_EBOOT_ICON = icon0.png
PSP_EBOOT_ICON1 = NULL
PSP_EBOOT_PIC0 = NULL
PSP_EBOOT_PIC1 = NULL
PSP_EBOOT_SND0 = NULL
PSP_EBOOT_PSAR = NULL
BUILD_PRX = 1
PSP_FW_VERSION = 371

PSPSDK=$(shell psp-config --pspsdk-path)
PSPBIN = $(PSPSDK)/../bin
CFLAGS += $(shell $(PSPBIN)/sdl-config --cflags)
LIBS += $(shell $(PSPBIN)/sdl-config --libs) -lpsppower
#-lSDL_mixer -lm
include $(PSPSDK)/lib/build.mak