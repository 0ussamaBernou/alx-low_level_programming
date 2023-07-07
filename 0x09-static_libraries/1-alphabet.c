#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet lowercase and newline
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i, a, z;

	a = 97;
	z = a + 26;

	for (i = a; i < z; i++)
	{
		_putchar((char)i);
	}

	_putchar('\n');
}
