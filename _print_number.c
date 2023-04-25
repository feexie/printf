#include "main.h"

/**
* print_number -a function  prints a number in standand output
*
* @number: an int number to be printed
* @ptr: a pointer to the size for printf
* Return: void
*/
void print_number(int number, int *ptr)
{
	unsigned int remainder;

	if (number < 0)
	{
		number *= -1;
		*ptr += 1;
		_putchar('-');
	}
	remainder = number;
	if (remainder / 10)
	{
		print_number(remainder / 10, ptr);
	}
	*ptr += 1;
	_putchar((remainder % 10) + '0');
}
/**
* hex_addr - printf addrresse lowercase hexadecimal
* @addr: address decimal
* @size: size for printf
*/
void hex_addr(unsigned long int addr, int *size)
{
	if (addr / 16)
	{
		hex_low(addr / 16, size);
	}
	*size += 1;
	if (addr % 16 < 10)
		_putchar('0' + (addr) % 16);
	else
		_putchar('a' + (((addr) % 16) - 10));
}
