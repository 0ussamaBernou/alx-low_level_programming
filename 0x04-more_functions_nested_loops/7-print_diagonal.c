#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n:number of times the \ character is printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
