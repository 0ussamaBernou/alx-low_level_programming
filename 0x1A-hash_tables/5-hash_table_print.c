#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	unsigned int printed;

	if (!ht)
		return;

	printf("{");
	printed = 0;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (printed == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
				printed++;
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
			node = node->next;
		}
	}
	printf("}\n");
}
