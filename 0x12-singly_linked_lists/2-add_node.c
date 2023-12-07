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
	int new_len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[new_len])
		new_len++;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = new_len;
	new->next = *head;
	*head = new;
	return (new);
}
