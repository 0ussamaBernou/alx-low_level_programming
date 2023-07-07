#include "main.h"

/**
 * jack_bauer - jack_bauer function
 *
 * Return: void
 */
int jack_bauer(void)
{
	int i, j, hours, mins;

	hours = 24;
	mins = 60;

	for (i = 0; i < hours; i++)
	{
		for (j = 0; j < mins; j++)
		{
			_putchar('0' + (int)(i / 10));
			_putchar('0' + (int)(i % 10));
			_putchar(':');
			_putchar('0' + (int)(j / 10));
			_putchar('0' + (int)(j % 10));
			_putchar('\n');
		}
	}

	return (0);
}
