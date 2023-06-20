#include "main.h"
#include <stdio.h>

/**
 * main - prints _putchar and newline
 *
 * Return: 0
 */

int main(void)
{
	int i, a, z;

	a = 97;
	z = a + 26;

	for (i = a; i < z; i++)
	{
		_putchar((char)i);
	}

	_putchar('\n');

	return (0);
}
