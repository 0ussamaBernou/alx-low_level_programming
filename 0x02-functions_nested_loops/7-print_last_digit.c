#include "main.h"

#include "6-abs.c"

/**
 * print_last_digit - return the last digit
 *
 * @n: number to process
 *
 * Return: last digit of n
 */

int print_last_digit(int n) { return _abs(n % 10); }
