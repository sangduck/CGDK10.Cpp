@ECHO OFF

cd build
call _build.windows.vs17 Debug.NDI x64 rebuild
call _build.windows.vs17 Release.NDI x64 rebuild
cd ..

pause