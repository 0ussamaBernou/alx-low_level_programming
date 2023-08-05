#include "main.h"

/**
 * clear_bit - clear bit at given index
 *
 * @n: reference to the number
 * @index: index given
 *
 * Return: 1 if it worked -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1UL << index);

	return (1);
}

