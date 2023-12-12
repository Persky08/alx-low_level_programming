#include "lists.h"

/**
 * get_nodeint_at_index - a function that gets the nth node in a list
 * @head: pointer to the head of the list
 * @index: the node we are looking for
 *
 * Return: index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;

	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current == NULL)
		{
			return (NULL);
		}
	}
	return (current);
}
