#include "main.h"
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
* octo - a function  convert decimal to octal
* @number:an usigned int variabl that store  number
* @ptr:a pointer variable for printf
*/

void octo(unsigned int number, int *ptr)
{
int octal;
octal  = 8;
	if (number / octal)
	{
		octo(number / octal, ptr);
	}
	*ptr += 1;
	_putchar('0' + number % octal);
}


/**
* hex_up - a function that  convert decimal to hexadecimal uppercase
* @number: an usigned variable that store number
* @ptr: size for printf
*/

void hex_up(unsigned int number, int *ptr)
{
int hexa_decimal;

hexa_decimal = 16;

	if (number / hexa_decimal)
	{
		hex_up(number / hexa_decimal, ptr);
	}
	*ptr += 1;
	if (number % hexa_decimal < 10)
		_putchar('0' + number % hexa_decimal);
	else
		_putchar('A' + ((number % hexa_decimal) -10));
}

/**
* hex_low - a function that convert decimal to hexadecimal lowercase
* @number: number
* @ptr:a pointer variable   for printf
*/

void hex_low(unsigned int number, int *ptr)
{
	if (number / 16)
	{
		hex_low(number / 16, ptr);
	}
	*ptr += 1;
	if (number % 16 < 10)
		_putchar('0' + number % 16);
	else
		_putchar('a' + ((number % 16) - 10));
}

/**
* hex_S - a function that convert decimal to hexadecimal Uppercase
* @number: an usigned int variable that stored a number
* @ptr:a pointer variable
*/
void hex_S(unsigned int number, int *ptr)
{
	int flag;

flag = 1;

	if (number / 16)
	{
		hex_up(number / 16, ptr);
	}
	if (flag == 1)
	{
		_putchar('0');
		*ptr += 1;
	}
	*ptr += 1;
	if (number % 16 < 10)
		_putchar('0' + number % 16);
	else
		_putchar('A' + ((number % 16) - 10));
	flag = 0;
}
