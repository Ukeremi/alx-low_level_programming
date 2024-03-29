#include "main.h"

/**
 * get_bit - returns the value of a bit at given
 * index.
 * @n: unsigned long int input.
 * @index: index of e bit.
 * Return: value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int u;

	if (n == 0 && index < 64)
		return (0);

	for (u = 0; u <= 63; n >>= 1, u++)
	{
		if (index == u)
		{
			return (n & 1);
		}
	}

	return (-1);
}
