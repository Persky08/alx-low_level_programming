#include "lists.h"

/**
 * add_node - a function that adds new node at the beginning
 * @head: the linked list
 * @str: the string
 *
 * Return:0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
		new++;
	new->length = len;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
