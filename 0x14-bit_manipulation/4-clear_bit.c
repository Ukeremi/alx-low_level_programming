#include "main.h"

/**
 * clear_bit - sets the value of any bit to 0
 * at any given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it didn't
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int uk;

	if (index > 63)
		return (-1);

	uk = 1 << index;

	if (*n & uk)
		*n ^= uk;

	return (1);
}
