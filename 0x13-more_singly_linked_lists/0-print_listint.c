#include "lists.h"

/**
 * print_listint - a function to print the elements in a linked list
 * @h: head of the node
 *
 * Return: elements in a node
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;
	const listint_t list = h;

	while (h != NULL)
	{
		printf("%i\n", list->n);
		elements++;
		list = list->next;
		
	}
	return (elements);
}
