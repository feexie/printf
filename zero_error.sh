#!/bin/sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o zero_error
./zero_error
