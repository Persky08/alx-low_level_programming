#include "lists.h"

/**
 * free_listint - a function to free memories occupied by linked list
 * @head: head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
