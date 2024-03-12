#include "search_algos.h"

/**
 * binary_search - search for value in a sorted array of ints
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int m, i;
	int l = 0;
	int r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d", array[i]);
			if (i < r - 1)
				printf(", ");
		}
		printf("\n");

		m = (l + r) / 2;

		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}
	return (-1);
}
