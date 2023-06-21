#include "main.h"

/**
 * print_to_98 - print_to_98 function
 *
 * @n: start point
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 0)
		{

			_putchar('-');
			_putchar('0' + (int)(i * -1 / 10));
			_putchar('0' + (int)(i * -1 % 10));
		}
		else
		{
			_putchar('0' + (int)(i / 10));
			_putchar('0' + (int)(i % 10));
		}
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar('\n');
	}
}
