#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: the pointer to the start of list to free
 * Return: size of free'd list (in nodes?)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_Count = 0;
	listint_t *temp = NULL;

	if (!(h && *h))
		return (node_Count);
	while (*h)
	{
		node_Count++;
		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (node_Count);
}
