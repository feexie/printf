#include "main.h"

/**
* print_number - a function that print number in output
*
* @number: store a int nuber
* @ptr: size for printf
* Return: void
*/
void print_number(int number, int *ptr)
{
	unsigned int num;

	if (number < 0)
	{
		number *= -1;
		*ptr += 1;
		_putchar('-');
	}
	num = number;
	if (num / 10)
	{
		print_number(num / 10, ptr);
	}
	*ptr += 1;
	_putchar((num % 10) + '0');
}
