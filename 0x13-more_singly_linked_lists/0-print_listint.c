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

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		elements++;
		
	}
	return (elements);
}
