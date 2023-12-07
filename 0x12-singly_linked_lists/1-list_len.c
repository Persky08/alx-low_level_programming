#include "lists.h"

/**
 * list_len - a function to return the number of elements in linkedlist
 * @h: list
 *
 * Return:0
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
