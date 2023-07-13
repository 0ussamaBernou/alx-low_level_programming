#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	size_t i, k, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	s3 = malloc_checked(sizeof *s1 * (i + n) + 1);

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
