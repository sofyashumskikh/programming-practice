@echo off

for %%i in (1900 2046 2012 1600 1800 2031 1952) do (
	call :leap %%i
)

exit /b

:leap
	set year=%1
	set /a p1=%year%%%4
	set /a p2=%year%%%100
	set /a p3=%year%%%400
	if "%p1%" NEQ "0" (goto :no)
	if "%p2%" NEQ "0" (goto :yes)
	if "%p3%" NEQ "0" (goto :no)
	:yes
	echo %year% is a leap year
	goto :eof
	:no
	echo %year% if NOT a leap year
	goto :eof

:eof