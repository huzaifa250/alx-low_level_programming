#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC -c *.c 
gcc -shared -o liball.so  *.o
