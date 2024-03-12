#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{

	int l = 0;
	int m = (size / 2) - 1; // to round
	int r = size - 1;

	if (!array || !*array)
		return (-1);

	if (value > array[m])
	{
		l = m + 1;
		m = ((r - l) / 2) - 1;
		binary_search(array + l, r - l, value);
	}
	else if (value < array[m])
	{
		r = m - 1;
		m = ((r - l) / 2) - 1;

		binary_search(array, r - l, value);
	}
}
