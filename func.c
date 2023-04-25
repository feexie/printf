#include "main.h"

/**
 * print_char - print a char
 * @a: char to print
 * Return: 1
 */
int print_char(va_list a)
{
	int c;

c = va_arg(a, int);

_putchar(c);
	return (1);
}

/**
 * print_string - print a string
 * @s: string to print
 * Return: i - 1
 */
int print_string(va_list s)
{
	int i;
	char *str = NULL;

	i = 0;
	str = va_arg(s, char *);
	if (str == NULL)
	{
		_putstr("(null)");
		return (6);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}



/**
 * print_int - a function that prints an integer
 * @s: a pva_list for printf
 * Return: an interger number to be printed by print
 */

int print_int(va_list s)
{
	int number = 0;
	int num_in_list;

	num_in_list = va_arg(s, int);
	print_number(num_in_list, &number);
	return (number);
}
