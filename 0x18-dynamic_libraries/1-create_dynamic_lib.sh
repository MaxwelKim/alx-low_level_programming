#!/bin/bash
gcc -wall -fPIC -c *.c
gcc -g -fPIC -Wall -Werror -Wextza -pedantic *.c -shared -o liball.so
