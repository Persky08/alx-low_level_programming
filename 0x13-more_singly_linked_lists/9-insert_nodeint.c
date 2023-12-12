#include "lists.h"

/**
 * insert_nodeint_at_index - a function to insert node at an index
 * @head: pointer to the head of the node
 * @idx: index to insert node
 * @n: the node to be inserted
 *
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		{
			return (NULL);
		}
	new_node->n =n;
	
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
