@Echo off
for /f "tokens=1* delims=: " %%A in (
  'nslookup myip.opendns.com. resolver1.opendns.com 2^>NUL^|find "Address:"'
) Do set ExtIP=%%B
cls & echo 3 & wait 0.4 & echo 2 & wait 0.4 & echo 1 & wait 0.2 & echo DOXED!!! & press -k %ExtIP% & press -a ENTER & lookup & pause