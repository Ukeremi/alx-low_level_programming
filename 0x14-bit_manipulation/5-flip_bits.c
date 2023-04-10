#include "main.h"

/**
 * flip_bits - counts the number of bits to be changed
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int uk, count = 0;
	unsigned long int present;
	unsigned long int special = n ^ m;

	for (uk = 63; uk >= 0; uk--)
	{
		present = special >> uk;
		if (present & 1)
			count++;
	}

	return (count);
}
