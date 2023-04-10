#include "main.h"

/**
 * print_binary - print the binary of decimal numbers
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int t, count = 0;
	unsigned long int present;

	for (t = 63; t >= 0; t--)
	{
		present = n >> t;

		if (present & 1)
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
