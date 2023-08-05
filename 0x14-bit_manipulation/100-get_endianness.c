#include "main.h"

/**
 * get_endianness - Short description, single line
 *
 * Return: 1 if little indian 0 if big indian
 */
int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *)&n;

	return ((int)*c);
}

