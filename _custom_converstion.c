#include "main.h"
/**
* print_String - print value of not printable char
* @s: string
* Return: length of the string
*/
int print_String(va_list s)
{
	int i = 0;
	int size = 0;
	unsigned char *str;

	str = va_arg(s, unsigned char *);
	if (str == NULL)
	{
		_putstr("\\x00");
		return (4);
	}
	while (str[i])
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_putstr("\\x");
			hex_S(str[i], &size);
			size += 2;
			i++;
		}
		else
		{
			_putchar(str[i]);
			i++;
			size++;
		}
	}
	return (size);
}
