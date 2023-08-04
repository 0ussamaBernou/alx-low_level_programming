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
	unsigned int i, mask, counter;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; (int)i >= 0; i--)
	{

		mask = (1 << i);

		if (n & mask)
		{
			_putchar('1');
			counter++;
		}
		else if (counter > 0)
			_putchar('0');
	}
}

