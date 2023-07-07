#include<stdio.h>

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
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch++);
	}
	putchar('\n');

	return (0);
}
