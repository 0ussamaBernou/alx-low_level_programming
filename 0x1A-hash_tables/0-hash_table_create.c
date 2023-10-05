#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the hash table
 *
 * Return: reference to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *thead;

	thead = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!thead)
	{
		free(thead);
		return (NULL);
	}

	thead->size = size;

	thead->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (!(thead->array))
	{
		free(thead->array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		thead->array[i] = NULL;

	return (thead);
}
