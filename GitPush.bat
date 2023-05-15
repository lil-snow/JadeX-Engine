@Echo off
call git add -A
set /P desc="Enter commit description: "
echo.
echo Comitting...
call git commit -m "%desc%"
echo Pushing...
call git push origin master 
pause