#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 *
 * @head: list's head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (!head)
		return;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}

