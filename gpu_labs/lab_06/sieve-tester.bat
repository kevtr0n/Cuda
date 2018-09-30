echo off

rem This script tests the sieve program through a series of trial candidates.
rem By Ron Coleman
rem 25 Sep 2018

set myday=%date%-%time%

echo Sieve test %myday% > sieve-out.txt

echo Error log %myday% > sieve-errs.txt

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
	131071
    ) do (
      echo Checking %%N >> sieve-out.txt
  
      .\sieve %%N >> sieve-out.txt 2>> sieve-errs.txt
  
      if not errorlevel 1 (
        echo --Done! >> sieve-out.txt
      ) 
    )
)