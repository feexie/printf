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
 * print_int - print an int
 * @s: va_list for printf
 * Return: number to print
 */

int print_int(va_list s)
{
	int n = 0;
	int nb;

	nb = va_arg(s, int);
	print_number(nb, &n);
	return (n);
}
