#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node in the beginning of the list
 *
 * @head: pointer to the head of the list
 * @str: content of the new node
 *
 * Return: address of the created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);

	/* new next node is whats head was pointing to */
	new->next = (*head);

	/* head now points to the new node pointer */
	(*head) = new;

	return (new);
}

