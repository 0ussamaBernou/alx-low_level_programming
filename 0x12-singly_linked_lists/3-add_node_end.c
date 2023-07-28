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
	list_t *ptr;

	ptr = *head;

	new = malloc(sizeof(list_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (!new->str)
	{
		free(new->str);
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;

	if (!(*head))
	{
		(*head) = new;
	}
	else
	{
		while ((ptr)->next)
		{
			(ptr) = (ptr)->next;
		}

		(ptr)->next = new;
	}

	return (new);
}

