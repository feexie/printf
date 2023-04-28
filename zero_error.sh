#!/bin/sh

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o ouput
./output
