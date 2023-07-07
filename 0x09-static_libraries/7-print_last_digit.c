#include "main.h"

#include "6-abs.c"

/**
 * print_last_digit - return the last digit
 *
 * @n: number to process
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int last;

	last = _abs(n % 10);

	_putchar('0' + last);
	return (last);
}
