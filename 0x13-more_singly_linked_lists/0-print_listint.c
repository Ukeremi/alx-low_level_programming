#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node)
	{
		printf("%d\n", node->n);
		cont++; /*count increment*/
		node = node->next;
	}

	return (cont);
}
