#include "main.h"
#include <stdio.h>

/**
 * main - prints _putchar and newline
 *
 * Return: 0
 */

int main(void)
{
	int i;

	char str[] = "_putchar";

	for (i = 0; i < (int)(sizeof(str) / sizeof(char)) - 1; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
