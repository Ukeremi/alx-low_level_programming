#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 *
 * @head: pointer to list
 * @index: position node to be deleted
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present = *head;
	unsigned int i = 0;
	listint_t *previous = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = present->next;
		free(present);
		return (1);
	}
	while (present != NULL)
	{
		if (i == index)
		{
			previous->next = present->next;
			free(present);
			return (1);
		}
		previous = present;
		present = present->next;
		i++;
	}
	return (-1);
}
