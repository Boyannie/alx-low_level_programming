#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -o liball.so -o liball.so *.o
export LD_IBRARY_PATH=.:$LD_LIBRARY_PATH
