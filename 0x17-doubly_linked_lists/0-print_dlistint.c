#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - print dllist
 *
 * @h: list head
 *
 * Return: list size
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	if (!h)
		return (n);

	while (h)
	{
		n++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (n);
}
