#include<stdio.h>

/**
 * main - main func
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch--);
	}
	putchar('\n');

	return (0);
}
