#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = (n >> index) & 1UL;

	return (value);
}

