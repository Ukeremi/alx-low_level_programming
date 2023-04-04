#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: pointer list
 */
void free_listint2(listint_t **head)
{
	listint_t **present = head;
	listint_t *previous;

	if (head == NULL)
		return;

	while (*present != NULL)
	{
		previous = *present;
		*present = (*present)->next;
		free(previous);
	}
	*head = NULL;
}
