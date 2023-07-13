#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int elements, i, num;

	if (max < min)
		return (NULL);

	elements = max - min + 1;

	arr = malloc(sizeof(int) * elements);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < elements; i++)
		arr[i] = num++;

	return (arr);
}
