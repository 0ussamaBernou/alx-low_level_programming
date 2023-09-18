#!/usr/bin/env bash

gcc -Wall -fPIC -c *.c
gcc -shared -o liball.so *.o
