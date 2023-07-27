#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints content of linked list
 *
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;
	char *str;
	list_t *ptr;

	if (h == NULL)
	{
		return (0);
	}
	nodes = 0;

	ptr = (list_t *)h;

	if (ptr->str == NULL)
	{
		printf("[0] (nil)\n");
		return (nodes);
	}

	while (ptr != NULL)
	{
		nodes++;

		str = ptr->str;
		printf("[%u] %s\n", ptr->len, str);

		ptr = ptr->next;
	}

	return (nodes);
}

