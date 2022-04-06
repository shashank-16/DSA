#!/bin/bash 

time g++ $1.cpp -o $1 -D $2 -g;
./$1;
