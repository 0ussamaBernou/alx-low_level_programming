#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 expected
 */
int main(void)
{
	int i, j, limit;

	limit = 100;

	for (i = 0; i < limit; i++)
	{
		for (j = 1; j < limit; j++)
		{
			if (j > i)
			{
				putchar(48 + (int)(i / 10));
				putchar(48 + (int)(i % 10));
                putchar(' ');
				putchar(48 + (int)(j / 10));
				putchar(48 + (int)(j % 10));

				if (j == limit - 1 && i == limit - 2)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
				continue;
		}
	}

	return (0);
}
