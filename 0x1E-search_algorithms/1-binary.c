#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value if found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int half;

	half = (int)(size / 2);

	if (!array)
	{
		return (-1);
	}

	/* if value is greater than array[size//2] */
	if (value < half)
	{
		binary_search(array, half, value);
	}

	/* if value is lesser than array[size//2] */
	else if (value > half)
	{
		binary_search(array + half, half, value);
	}
}
