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
 * print_octo - prints the number in octal
 * @octo: va_list
 * Return: an octal  number
 */

int print_octo(va_list octo)
{
	int number = 0;

	octo_func(va_arg(octo, unsigned int), &number);
	return (number);
}

/**
 * print_hex_up - prints the number in hexadecimal uppercase
 * @hex: argument list va_list
 * Return: a hexxidecimal  number
 */

int print_hex_up(va_list hex)
{
	int number = 0;

	hex_up_func(va_arg(hex, unsigned int), &number);
	return (number);
}

/**
 * print_hex_low - prints the number in hexadecimal lowerecase
 * @hexx: va_list
 * Return: a number
 */

int print_hex_low(va_list hexx)
{
	int number = 0;

	hex_low_func(va_arg(hexx, unsigned int), &number);
	return (number);
}

/**
 * print_unsigned - prints unsigned
 * @u: va_list
 * Return: a number
 */

int print_unsigned(va_list u)
{
	unsigned int n = 0;

	print_number_u(va_arg(u, unsigned int), &n);
	return (n);
}
