#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	size_t length, i;

	length = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return dest;
}
