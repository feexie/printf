#include "main.h"
/**
* print_String - a function that print value of not printable char
* @argument:variable argument  that store a list to variable passed
* Return: the length of the string
*/
int print_String(va_list argument)
{
	int counter;

	counter = 0;
	int length;

	length = 0;
	unsigned char *string;

	string = va_arg(argument, unsigned char *);
	if (string == NULL)
	{
		_putstr("\\x00");
		return (4);
	}
	while (string[counter])
	{
		if ((string[counter] < 32 || string[counter] >= 127) && string[counter])
		{
			_putstr("\\x");
			hex_S(string[counter], &length);
			length += 2;
			counter++;
		}
		else
		{
			_putchar(string[counter]);
			counter++;
			length++;
		}
	}
	return (length);
}
