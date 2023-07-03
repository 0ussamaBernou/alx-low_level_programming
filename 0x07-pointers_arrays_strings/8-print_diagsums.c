#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i) * sizeof(int));
		sum2 += *(a + (i * size + (size - i - 1)) * sizeof(int));
	}

	printf("%d, %d\n", sum1, sum2);
}
