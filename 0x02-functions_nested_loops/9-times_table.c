#include "main.h"

/**
 * times_table - prints the product table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, limit, product;

	limit = 10;

	for (i = 0; i < limit; i++)
	{
		for (j = 0; j < limit; j++)
		{
			product = i * j;

			if (product >= 10)
			{
				_putchar('0' + (int)((product) / 10));
				_putchar('0' + (int)((product) % 10));
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (int)(product));
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			if (j == limit - 1)
			{
				_putchar('\n');
			}
		}
	}
}
