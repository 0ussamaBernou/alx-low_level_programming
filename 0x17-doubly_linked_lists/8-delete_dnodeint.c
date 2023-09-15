#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iterator;
	unsigned int i;

	iterator = *head;
	if (!head || !(*head))
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		if (!iterator)
		{
			return (-1);
		}
		iterator = iterator->next;
	}

	if (iterator->prev)
	{
		if (iterator->next)
		{
			iterator->next->prev = iterator->prev;
			iterator->prev->next = NULL;
		}
		iterator->prev->next = iterator->next;
	}
	else
	{
		if (iterator->next)
		{
			iterator->next->prev = NULL;
			*head = iterator->next;
		}
		else
		{
			return (-1);
		}
	}
	free(iterator);
	return (1);
}
