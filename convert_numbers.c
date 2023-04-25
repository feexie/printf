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

/**
* octo_func - convert decimal to octal
* @number: number
* @ptr: size for printf
*/

void octo_func(unsigned int number, int *ptr)
{
unsigned int bin;

bin = 8;

	if (number / bin)
	{
		octo_func(number / bin, ptr);
	}
	*ptr += 1;
	_putchar('0' + number % bin);
}


/**
* hex_up_func - convert decimal to hexadecimal uppercase
* @number: number
* @ptr: size for printf
*/

void hex_up_func(unsigned int number, int *ptr)
{
unsigned int bin;

bin = 16;

if (number / bin)
{
hex_up_func(number / bin, ptr);
}
	*ptr += 1;
if (number % bin < 10)
	_putchar('0' + number % bin);
else
	_putchar('A' + ((number % bin) -10));
}

/**
* hex_low_func - convert decimal to hexadecimal lowercase
* @number: store int number
* @ptr: pointer  for printf
*/

void hex_low_func(unsigned int number, int *ptr)
{
unsigned  int bin;

bin = 16;

if (number / bin)
{
hex_low_func(number / bin, ptr);
}
*ptr += 1;
if (number % bin < 10)
	_putchar('0' + number % bin);
else
	_putchar('a' + ((number % bin) -10));
}

/**
* hex_S - convert decimal to hexadecimal Uppercase
* @number: number
* @ptr: int for printf
*/
void hex_S(unsigned int number, int *ptr)
{
unsigned int bin;

bin = 16;

int check = 1;

	if (number / bin)
	{
		hex_S(number / bin, ptr);
	}
	if (check == 1)
	{
		_putchar('0');
		*ptr += 1;
	}
	*ptr += 1;
	if (number % bin < 10)
		_putchar('0' + number % bin);
	else
		_putchar('A' + ((number % bin) -10));
	check = 0;
}
