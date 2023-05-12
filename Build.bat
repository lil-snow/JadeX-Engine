@Echo off
:COMPILE
call make
echo.
call JadeX.exe
echo.
pause
goto COMPILE