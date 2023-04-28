#include "main.h"
#include <stdarg.h>

/**
 * print_binary -a function that  prints the number in binary
 * @binary: variable function argument list
 * Return: a binary number
 */

int print_binary(va_list binary)
{
	int number = 0;

	binary_func(va_arg(binary, int), &number);
	return (number);
}

/**
 * print_octo -a function that  prints the number in octal
 * @argument: a variable argument
 * Return: an octal number
 */

int print_octo(va_list argument)
{
int number;

number = 0;

	octo(va_arg(argument, unsigned int), &number);
	return (number);
}

/**
 * print_hex_up -a function that  prints the number in hexadecimal uppercase
 * @argument: argument variable
 * Return: a hexidecimal  number
 */

int print_hex_up(va_list argument)
{
	int number;

number = 0;

	hex_up(va_arg(argument, unsigned int), &number);
	return (number);
}

/**
 * print_hex_low -a function that  prints the number in hexadecimal lowerecase
 * @argument: variable argument
 * Return: a hex  number
 */

int print_hex_low(va_list argument)
{

int number;

number = 0;

	hex_low(va_arg(argument, unsigned int), &number);
	return (number);
}

/**
 * print_unsigned -a function that  prints unsigned int
 * @argument: variable argument list
 * Return:an octal  number
 */

int print_unsigned(va_list argument)
{
	unsigned int number;

number = 0;

	print_number_u(va_arg(argument, unsigned int), &number);

return (number);
}
