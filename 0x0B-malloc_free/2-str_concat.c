#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL if insufficient memory
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, size = 0;
	char *str, *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = s1;
	while (s1[size] != '\0')
		size++;

	while (s2[i] != '\0')
	{
		size++;
		i++;
	}

	str = (char *)malloc(size * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (s1[i] == '\0')
		{
			ptr = s2;
			continue;
		}
		str[i] = ptr[i];
	}

	return (str);
}
