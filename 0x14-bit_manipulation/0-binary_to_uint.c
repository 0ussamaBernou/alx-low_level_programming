#include "main.h"

/**
 * binary_to_uint - converts string binary to uint
 * @b: string binary
 *
 * Return: converted uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, i;
	char *bin;

	bin = (char *)b;

	uint = 0;
	i = 0;
	while (bin[i] != '\0')
	{
		uint <<= 1;
		if (bin[i++] == '1')
			uint ^= 1;
	}

	return (uint);
}

