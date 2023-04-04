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
	int um;

	for (um = 0; h != NULL; um++)
		h = h->next;

	return (um);
}
