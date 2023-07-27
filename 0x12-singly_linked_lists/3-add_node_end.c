#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node to the end of the list
 * @head: pointer to the list's head
 * @str: content of the new node
 *
 * Return: returns a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t **ptr;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = NULL;

	while (!(*ptr)->next)
	{
		(*ptr) = (*ptr)->next;
	}

	(*ptr)->next = new;

	return (new);
}

