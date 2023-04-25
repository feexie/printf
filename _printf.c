#include "main.h"

/**
 * check_formatage - check to found the argument
 * @c: char check
 * Return: size
 */

static int check_formatage(char c)
{
	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	return (0);
}

/**
 * check_arg - check to found the argument
 * @arg: va_list
 * @_format: format
 * @symbole: symbole
 * Return:size
 */

static int check_arg(va_list arg, char *_format, format_t *symbole)
{
	int i = 0, j = 0, size = 0;

	while (_format[i])
	{
		while (_format[i] && _format[i] != '%')
		{
			_putchar(_format[i]);
			++i;
			size++;
		}
		j = 0;
		if (_format[i] == '%')
		{
			i++;
			size += check_formatage(_format[i]);
			if (_format[i] == '\0')
				return (-1);
		}
		while (symbole[j].letter != '\0')
		{
			if (symbole[j].letter == _format[i])
			{
				size += symbole[j].check(arg);
				break;
			}
			j++;
		}
		if (_format[i])
		{
			if (symbole[j].letter == '\0' && _format[i] != '%')
			{
				_putchar('%');
				_putchar(_format[i]);
				size += 2;
			}
			i++;
		}
	}
	return (size);
}

/**
* _printf - print in stdout a _format string
* @_format: string with _format
* Return: size of characters
*/

int _printf(const char *_format, ...)
{
	int bytes;
	va_list argument;
	format_t symbole[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octo},
		{'x', print_hex_low},
		{'X', print_hex_up},
		{'S', print_String},
		{'\0', NULL}
	};

	if (_format == NULL)
		return (-1);

	va_start(argument, _format);
	bytes = check_arg(argument, (char *)_format, symbole);
	va_end(argument);
	return (bytes);
}
