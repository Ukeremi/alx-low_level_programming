#include "main.h"

/**
 * _isupper - This function checks for uppercase characters
 * @c: The character to check
 *
 * Return: 1 on sucess, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
