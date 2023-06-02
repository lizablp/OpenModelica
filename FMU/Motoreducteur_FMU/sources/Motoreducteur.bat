@echo off
SET PATH=;C:/Programmes/OpenModelica/bin/;%PATH%;
SET ERRORLEVEL=
CALL "%CD%/Motoreducteur.exe" %*
SET RESULT=%ERRORLEVEL%

EXIT /b %RESULT%
