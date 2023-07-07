#include <stdio.h>

/**
 * main - main func
 *
 * Return: 0 (if run well)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch++);
	}
	putchar('\n');

	return (0);
}
