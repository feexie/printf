#include "main.h"
/**
* print_String - print value of not printable char
* @s: string
* Return: length of the string
*/
int print_String(va_list s)
{
	int i;
	int size;
	unsigned char *str;

	i = 0;

	size = 0;

	str = va_arg(s, unsigned char *);
	if (str == NULL)
	{
		_putstr("\\x00");
		return (4);
	}
	while (str[i])
	{
		if ((str[i] < 32 || str[i] >= 127) && str[i])
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


/**
 * reverse_string - prints the string in reverse
 * @strings: va_list
 * Return: size of the string
 */

int reverse_string(va_list strings)
{
	int counter;
	int count;
	char *str_reverse;

	counter = 0;
	str_reverse = va_arg(strings, char *);

	if (str_reverse == NULL)
	{
		str_reverse = "r%";
	}
	for (counter = 0; str_reverse[counter] != '\0';)
	{
	counter++;
	}


	count = counter - 1;

	while (count >= 0)
	{
		_putchar(str_reverse[count]);
		count--;
	}
	return (counter);
}
