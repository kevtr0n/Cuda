#!/bin/ksh

# This script tests the isprime program through a series of trial candidates.
# By Ron Coleman
# 16 Sep 2018

myday=`date`

echo Sieve test $myday > sieve-out.txt

echo Error log $myday > sieve-errs.txt

for N in hello 0 1 2 5 6 28	29 -29 496 8191	8192 131071
do
  echo Checking $N >> sieve-out.txt
  
  ./sieve $N >> sieve-out.txt 2>> sieve-errs.txt
  
  if [ $? -eq 0 ]
  then
    echo --Done! >> sieve-out.txt
  fi
done