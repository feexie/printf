#include "main.h"

/**
 * check_formatage - a function that check to found the argument
 * @c: a character variable  check
 * Return:a int  varibale called size
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
 * check_arg - a a function that check to found the argument
 * @arg: variable argument va_list
 * @_format: a string pointer called format
 * @symbole:a function of type format_t structure symbole
 * Return:a size
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
		{'o', print_octo},
		{'x', print_hex_low},
		{'X', print_hex_up},
		{'u', print_unsigned},
		{'S', print_String},
		{'p', print_addr},
		{'r', reverse_string},
		{'R', hack_rot13},
		{'\0', NULL}
	};

	if (_format == NULL)
		return (-1);

	va_start(argument, _format);
	bytes = check_arg(argument, (char *)_format, symbole);
	va_end(argument);
	return (bytes);
}
