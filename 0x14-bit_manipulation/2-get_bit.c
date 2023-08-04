#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	value = (n >> index) & 1UL;

	return ((int)value);
}

