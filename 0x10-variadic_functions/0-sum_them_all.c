#include "variadic_functions.h"
#include <stdarg.h>

/** sum all parameters
 *
 * @n: first num
 * @...: numbers to sum
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	int sum = 0;

	va_start(al, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, int);
	}
	va_end(al);
	return (sum);
}
