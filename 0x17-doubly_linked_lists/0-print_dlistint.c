#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint in a list
 *
 * @h: head dlistint
 *
 * Return: 0 on success
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
