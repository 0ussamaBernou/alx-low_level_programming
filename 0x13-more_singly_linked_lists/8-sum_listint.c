#include "lists.h"

/**
 * sum_listint - sum data of a list
 *
 * @head: head of the list
 *
 * Return: sum of list data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

