#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * @n : number of bytes
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t length, i;

	length = strlen(dest);

	for (i = 0; (int)i < n && src[i] != '\0'; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return (dest);
}
