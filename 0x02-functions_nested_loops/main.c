#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c) { return (write(1, &c, 1)); }
#include "main.h"

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
