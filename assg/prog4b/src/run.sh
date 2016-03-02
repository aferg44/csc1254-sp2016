#!/bin/bash

highlight -O xterm256 -s golden $1.cpp
read
g++ -std=c++11 $1.cpp -o $1
./$1
