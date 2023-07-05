#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: square root of n, -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);

	return (find_sqrt(n, i));
}
