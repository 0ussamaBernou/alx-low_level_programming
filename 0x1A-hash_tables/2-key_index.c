#include "hash_tables.h"

/**
 * key_index - returns the index given a key
 *
 * @key: key to index
 * @size: size of the table
 *
 * Return: the index calculated
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
