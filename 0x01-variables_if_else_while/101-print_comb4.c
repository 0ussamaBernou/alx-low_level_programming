#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 expected
 */
int main(void)
{
	int i, j, k, limit;

	limit = 10;

	for (i = 0; i < limit; i++)
	{
		for (j = 0; j < limit; j++)
		{
			for (k = 0; k < limit; k++)
			{
				if (k > j && j > i) /* checks if the combination is the smallest*/
				{
				 	// print the number
					putchar(48 + i);
					putchar(48 + j);
					putchar(48 + k);

					if (j == limit - 2 && i == limit - 3 &&
					    k == limit - 1)
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
	}

	return (0);
}
