#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	size_t i;
	char *new_str;

	new_str = (char *)malloc(sizeof(str));

	for (i = 0; i < (sizeof(str) / sizeof(char)); i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
