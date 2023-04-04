#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: pointer to list
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t **present = head;
	listint_t *previous;
	int val;

	if (*head == NULL)
		return (0);

	previous = *present;
	*present = (*present)->next;
	val = previous->n;
	free(previous);
	return (val);
}
