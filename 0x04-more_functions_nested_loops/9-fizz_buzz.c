#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the numbers from 1 to 100
 * 3 multiples print fizz instead of the number
 * 5 multiples print buzz instead of the number
 * 3 & 5 print FizzBuzz instead of the number
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 100; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", fb);
		else if (i % 3 == 0)
			printf("%s", f);
		else if (i % 5 == 0)
			printf("%s", b);
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}
