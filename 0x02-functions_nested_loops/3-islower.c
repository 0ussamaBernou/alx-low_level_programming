#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if char lowercase
 *
 * Return: OnSucces 1. OnFail 0
 */

int _islower(char c)
{
	int a, z;

	a = 97;
	z = a + 26;

	if (c >= a && c <= z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
