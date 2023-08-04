#include "main.h"

/**
 * get_bit - get bit at index
 *
 * @n: the number
 * @index: the index
 *
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	value = (n >> index) & 1UL;

	return ((int)value);
}

