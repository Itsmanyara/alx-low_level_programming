#include "main.h"

/**
 * get_endianness - Checks if machine is a little or big endian
 * Return: 0 (Big), 1 (little)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}