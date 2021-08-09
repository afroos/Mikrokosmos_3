@echo off
echo Removing...

set folders=.vs\, Bin\, Intermediate\

for %%G in (%folders%) do (
	if exist %%G rd /s /q %%G
)

echo Done.