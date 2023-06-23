#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, limit, n;

	limit = 15;

	for (i = 0; i < 10; i++)
	{

		for (i = 0; i < limit; i++)
		{
			n = i;
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				n = i % 10;
			}
			_putchar(n + '0');
		}

		_putchar('\n');
	}
}
