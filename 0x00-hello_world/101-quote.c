#include <stdio.h>
/**
 * main - A c program that prints a line to the standard erro
 * Return: 1 (success)
 */
int main(void)
{
	fwrite(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
