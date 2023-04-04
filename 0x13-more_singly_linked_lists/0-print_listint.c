#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h)
	{
		printf("%d\n", h->n);

		if (h->next)
			count += print_listint(h->next);

		return (count);
	}
	else
		return (0);
}
