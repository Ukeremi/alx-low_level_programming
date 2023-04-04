#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int um;

	for (um = 0; h != NULL; um++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (um);
}
