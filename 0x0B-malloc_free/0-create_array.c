#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char.
 * @size: size of the array
 * @c: char to initialize the array
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	size_t i;

	if (size == 0)
		return NULL;

	char *str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
		return NULL;

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return str;
}
