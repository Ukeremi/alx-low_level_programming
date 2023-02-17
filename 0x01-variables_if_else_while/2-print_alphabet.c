#include <stdio.h>
/**
 * Main -  Entry point
 *
 * Description: Prints the alphabet.
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
