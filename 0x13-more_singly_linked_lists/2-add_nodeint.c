#include "lists.h"

/**
 * add_nodeint - a function to add new node at the beginning
 * @head: beginning of the node
 * @n: value to be added to node
 *
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{	
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
