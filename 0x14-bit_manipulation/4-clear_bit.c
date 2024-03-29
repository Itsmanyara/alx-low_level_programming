#include "main.h"

/**
 * clear_bit - Sets value of a bit to 0
 * @n: Points to the number to change
 * @index: Index of the bit
 * Return: 1 (Success), -1 (Failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
