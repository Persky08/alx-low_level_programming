#include "lists.h"

/**
 * pop_listint - a function to delete the head of a list
 * @head: pointer to the head of the list
 *
 * Return: void
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	tmp = *head;
	value = tmp->n;

	*head = tmp->next;
	free(tmp);
	return (value);
}
