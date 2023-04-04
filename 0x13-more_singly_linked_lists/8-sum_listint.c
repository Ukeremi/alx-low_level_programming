#include "lists.h"

/**
 * sum_listint - sums all the data n of a list
 *
 * @head: pointer to list
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *present;
	int sum = 0;

	if (head == NULL)
		return (0);

	present = head;
	while (present != NULL)
	{
		sum += present->n;
		present = present->next;
	}
	return (sum);
}
