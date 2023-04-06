#include "main.h"

/**
 * get_bit - Returns a value bit at an index in a decimal number
 * @n: The number to be searched
 * @index: The bit index
 * Return: The value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
