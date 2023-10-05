#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: head of the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *head;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			node = head;
			head = head->next;
			free(node->value);
			free(node->key);
			free(node);
		}
	}

	free(ht->array);
	free(ht);
}
