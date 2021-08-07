@echo off
echo Removing...

if exist Bin\          rd /s /q Bin\
if exist Intermediate\ rd /s /q Intermediate\

echo Done.
pause