#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if char is alpha
 *
 * @c: character to check
 *
 * Return: OnSucces 1. OnFail 0
 */

int _isalpha(char c)
{
	int a, z, A, Z;

	a = 97;
	z = a + 26;
	A = 65;
	Z = A + 26;

	if ((c >= a && c <= z) || (c >= A && c <= Z))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
