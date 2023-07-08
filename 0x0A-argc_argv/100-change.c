#include "main.h"

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money.
 * @argc: number of arguments
 * @argv: array of pointers to the strings (arguments)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum, coins = 0;

	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]);

	if (sum <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{

		while (sum >= cents[i])
		{
			sum -= cents[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);
}
