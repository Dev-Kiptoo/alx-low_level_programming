#!/bin/bash
gcc -fPIC -wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATN=.:$LD_LIBRARY_PATH
