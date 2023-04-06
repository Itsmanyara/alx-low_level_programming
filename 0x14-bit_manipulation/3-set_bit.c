#include "main.h"

/**
 * set_bit - Sets bit a a given index to 1
 * @n: Points to the number to change
 * @index: Index of the bit
 * Return: 1 (Success), -1 (Failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
