@ECHO OFF
set /a "x = 0"

:build
    CLS
    set /a "X = x + 1"

    @TITLE ASE BUILD #%x%
    ECHO Building #%x%...
    "C:\Program Files (x86)\GnuWin32\bin\make.exe"

    REM ECHO Cleaning...
    REM REM destroys all .o object files recursively (/S) and silently (/Q)
    REM del /S /Q *.o

    ECHO Installing...
    REM add your plugin directories here for auto install

    COPY bin\win.xpl "D:\Documents\programs\X-Plane 11\Aircraft\Chai112\b777-300er\plugins\test"
    COPY bin\win.xpl "D:\Documents\programs\X-Plane 11\Aircraft\Chai112\xtest1\plugins\test"
    COPY bin\win.xpl "D:\Documents\programs\X-Plane 11\Aircraft\Chai112\xtest2\plugins\test"

    ECHO Finished. I've built this %x% times.
    PAUSE
    goto :build

