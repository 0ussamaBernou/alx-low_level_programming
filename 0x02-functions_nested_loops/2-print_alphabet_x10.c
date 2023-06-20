#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet lowercase and newline
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j, a, z;

	a = 97;
	z = a + 26;

	for (j = 0; j < 10; j++)
	{

		for (i = a; i < z; i++)
		{
			_putchar((char)i);
		}

		_putchar('\n');
	}
}
