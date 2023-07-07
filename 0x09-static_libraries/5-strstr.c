#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: pointer to the beginning of the located substring or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			p = &haystack[i];
			return (p);
		}
	}

	return (NULL);
}
