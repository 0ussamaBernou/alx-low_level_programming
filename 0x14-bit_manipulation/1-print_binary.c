#include "main.h"

/**
 * print_binary - print number in binary
 *
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int  mask;
	int counter,i;

	counter = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	for (i = 63; i >= 0; i--)
	{

		mask = (1UL << i);

		if (n & mask)
		{
			_putchar('1');
			counter++;
		}
		else if (counter > 0)
			_putchar('0');
	}
}

