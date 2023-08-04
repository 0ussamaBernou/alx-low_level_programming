#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	value = (n >> index) & 1UL;
	if (value != 0 || value != 1)
		return (-1);

	return ((int)value);
}

