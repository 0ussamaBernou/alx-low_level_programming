#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print_to_98 function
 *
 * @n: start point
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; n < 98 ? (i <= 98) : (i>= 98); n < 98 ? i++ : i--)
	{
		printf("%d", i);
		i == 98 ? printf("\n") : printf(", ");
	}
}
