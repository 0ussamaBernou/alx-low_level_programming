#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - return number of elements in dllist
 *
 * @h: head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (!h)
		return (count);

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
