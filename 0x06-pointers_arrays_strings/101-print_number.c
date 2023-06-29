#include "main.h"
void print_number(int n)
{
	int digits[10];
	int i, j;

	i = 0;

	if (n == 0)
		_putchar('0');

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n != 0)
	{
		digits[i] = n % 10;
		n /= 10;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digits[j] + '0');
	}
}
