#include "main.h"
#include <stdio.h>
/**
* binary - convert decimal to binary
* @nb: number
* @size: size for printf
*/

void binary(unsigned int nb, int *size)
{
	if (nb / 2)
	{
		binary(nb / 2, size);
	}
	*size += 1;
	_putchar('0' + nb % 2);
}
