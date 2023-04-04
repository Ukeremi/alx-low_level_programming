#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: list pointer
 */
void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != NULL)
	{
		present = head;
		head = present->next;
		free(present);
	}
}
