#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
	list_t *ptr;
	if (!head) {
		return;
	}

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}

