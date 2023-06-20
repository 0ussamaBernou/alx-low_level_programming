#include "main.h"
#include <stdio.h>

/**
 * _abs - return the absolute value of an int
 *
 * @n: number to absolute
 *
 * Return: absolute value of n
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
