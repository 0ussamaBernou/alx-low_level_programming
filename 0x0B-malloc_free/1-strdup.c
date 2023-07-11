#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	size_t i, size = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	new_str = (char *)malloc(size * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
