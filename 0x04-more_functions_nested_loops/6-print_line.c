#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input the number of times to print '_'
 *
 * Return: a straight line
 */

void print_line(int n)
{
	int uk;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (uk = 1; uk <= n; uk++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
