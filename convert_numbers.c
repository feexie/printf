#include "main.h"
#include <stdio.h>
/**
* binary_func - convert decimal to binary
* @number: number
* @ptr: size for printf
*/

void binary_func(unsigned int number, int *ptr)
{
unsigned int bin;
bin = 2;
	if (number / bin)
	{
		binary_func(number / bin, ptr);
	}
	*ptr += 1;
	_putchar('0' + number % bin);
}
