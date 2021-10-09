@echo off

for /l %%i in (1,1,30000) do (
	call :mod %%i
)
exit /b

:mod
	set num=%1
	set /a ost=%num%*%num%%%1000000
	if "%ost%" EQU "269696" (goto :yes)
	if "%ost%" NEQ "269696" (goto :eof)
	:yes
	echo the answer is %num%
	goto :eof
:eof