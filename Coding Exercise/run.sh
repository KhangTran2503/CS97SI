#!/bin/bash

filename=$1
in=$2
#echo $filename

if [ ! -z "$in" ]
then
    gedit ./input
fi

if [[ "$filename" == *".py" ]]
then
    python3 $filename < input
fi

if [[ "$filename" == *".cpp" ]]
then
    g++ -std=c++11 -O2 $filename && ./a.out < ./input
fi