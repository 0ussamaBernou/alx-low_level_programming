#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to first occurence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{

	char *occ;
	occ = s;

	while (*occ != c && *occ != '\0')
	{
		if (*occ == '\0')
			return (NULL);
		occ++;
	}

	return (occ);
}
