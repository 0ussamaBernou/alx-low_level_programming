#include <stdio.h>

/**
 * main - main func
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch++);
	}

	/* from z to A (ascii) */
	ch -= (32 + 26);

	while (ch <= 'Z')
	{
		putchar(ch++);
	}
	putchar('\n');

	return (0);
}
