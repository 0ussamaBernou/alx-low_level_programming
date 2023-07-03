#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	char *p;

	p = s;

	while (*p != '\0')
	{
		if (*p++ == c)
		{
			return (p);
		}
	}

	return (NULL);
}
