echo off

rem This script tests the isprime program through a series of trial candidates.
rem By Ron Coleman
rem 16 Sep 2018

set myday=%date%-%time%

echo Prime test %myday% > prime-out.txt

echo Error log %myday% > prime-errs.txt

for %%N in (
	hello,
	0,
	1,
	2,
	5,
	6,
	28,
	29,
	-29,
	496,
	8191,
	8192,
	131071,
	524287,
	524288,
	6700417,
	2127483647,
	2147483647,
	67280421310721)  do (
      echo Checking %%N >> prime-out.txt
  
      .\isprime %%N >> prime-out.txt 2>> prime-errs.txt
  
      if not errorlevel 1 (
        echo --Done! >> prime-out.txt
      ) 
    )
)