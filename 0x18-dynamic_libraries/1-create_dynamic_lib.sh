#!/bin/bash

gcc -wall -fPIC -c *.c
gcc -Wall -pedantic -Werror -Wextra -L. *.c -ldynamic -o
