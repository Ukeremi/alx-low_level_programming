#include <stdio.h>
/**
 * main - Print the alphabet.
 *
 * Return: 0 (sucess)
 */
int main(void) /* Our execution start here*/
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
