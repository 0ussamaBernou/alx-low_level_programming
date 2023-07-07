#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the addition, followed by a new line.
 * @argc: number of arguments
 * @argv: array of pointers to the strings (arguments)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
                if (atoi(argv[i]) == 0 && *argv[i] != '0')
                {
                        printf("Error\n");
                        return (1);
                }
                else
                {
		sum += atoi(argv[i]);
                }
                

	printf("%d\n", sum);
	return (0);
}
