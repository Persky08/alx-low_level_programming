#include "lists.h"
/**
 * listint_len - a function to find the number of elements of a node
 * @h: head of the node
 *
 * Return: number of elements in a node
 */


size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
