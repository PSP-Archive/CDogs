@echo off
pspsh.exe -e "reset vsh"
pspsh.exe -e "cp host0:/eboot.pbp ms0:/psp/game150/cdogspsp/eboot.pbp"
rem pspsh.exe -e "ms0:/seplugins/capture.prx"
pspsh.exe -e "ms0:/psp/game150/cdogspsp/eboot.pbp"