#include "lists.h"

/**
 * listint_len - number of element in a list
 *
 * @h: list
 *
 * Return: the number of element of a list.
 */

size_t listint_len(const listint_t *h);
{
	int j;

	for (j = 0; h != NULL; j++)
		h = h->next;

	return (j);
}
