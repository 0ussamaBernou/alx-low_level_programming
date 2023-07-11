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
	size_t i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = (char *)malloc(sizeof(str));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < (sizeof(str) / sizeof(char)); i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
