#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers linearly
 *
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search
 *
 * Return: index in array if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
