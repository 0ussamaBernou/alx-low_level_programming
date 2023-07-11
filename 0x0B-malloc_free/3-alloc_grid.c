#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the 2D array, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int *ptr;
	int **pptr;

	ptr = (int *)malloc(width * height * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	pptr = &ptr;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			pptr[h][w] = 0;
			w++;
		}
		h++;
	}

	return (pptr);
}
