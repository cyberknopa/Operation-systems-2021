echo off
runthis
asklist | find /v /n /c "" >> \tmp\count1.txt
goto runthis
