#include "lists.h"

/**
 * sum_listint - a function that sums all the data of a list
 * @head: head of a list
 *
 * Return: sum of the elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0, i;
	listint_t *current;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	for (i = 0; current != NULL; i++)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
