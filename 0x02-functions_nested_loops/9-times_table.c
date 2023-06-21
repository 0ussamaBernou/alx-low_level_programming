#include "main.h"

/**
 * jack_bauer - jack_bauer function
 *
 * Return: void
 */
int jack_bauer(void)
{
	int i, j, limit;

	limit = 10;

	for (i = 0; i < limit; i++)
	{
		for (j = 0; j < limit; j++)
		{
			_putchar('0' + (int)(i * j));
			_putchar(',');
		}
		_putchar('\n');
	}

	return (0);
}
