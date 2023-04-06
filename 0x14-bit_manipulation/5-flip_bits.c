#include "main.h"

/**
 * flip_bits - Counts number of the bits to change
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int cur;
	unsigned long int excl = n ^ m;

	for (i = 63; 1 >= 0; i--)
	{
		cur = excl >> i;
		if (cur & 1)
			count++;
	}
	return (count);
}
