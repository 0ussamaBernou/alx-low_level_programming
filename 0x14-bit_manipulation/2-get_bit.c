#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	value = (n >> index) & 1UL;

	return ((int)value);
}

