#include "main.h"

/**
 * print_binary - prints the binary equivalent to a decimal number
 * @n: number to be printed in the binary
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> i;

		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
