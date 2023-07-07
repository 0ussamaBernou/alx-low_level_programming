#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer to a string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}

	putchar('\n');
}
