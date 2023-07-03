#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i) * sizeof(*a));
		sum2 += *(a + (i * size + (size - i)) * sizeof(*a));
	}

	printf("%d, %d\n", sum1, sum2);
}
