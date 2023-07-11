#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	size_t i;

	if (size == 0)
		return NULL;

	char *str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
		return NULL;

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return str;
}
