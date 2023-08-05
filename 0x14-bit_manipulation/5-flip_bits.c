#include "main.h"

/**
 * flip_bits  - returns number of bits to be flipped
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int diff;
	unsigned int count;

	diff = n ^ m;

	count = 0;
	while (diff > 0)
	{
		count += diff & 1UL;
		diff >>= 1;
	}

	return (count);
}

