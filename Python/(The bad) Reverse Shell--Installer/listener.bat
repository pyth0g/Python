@echo off
:loop
cls
ncat -lvnp 5000
goto loop