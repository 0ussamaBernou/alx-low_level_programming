#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to concatenate to s1
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	size_t i, k, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	s3 = malloc(sizeof *s1 * (i + n + 1));
	if (s3 == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s3[k] = s1[k];

	for (l = 0; l < n; l++)
	{
		if (s2[l] != '\0')
			s3[k + l] = s2[l];
		else
			break;
	}

	s3[k + l] = '\0';

	return s3;
}
