#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: pointer to a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(s + i))
		i++;

	while (j < i--)
	{
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		j++;
	}
}
