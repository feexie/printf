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
