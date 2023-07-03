#include <stdio.h>

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
