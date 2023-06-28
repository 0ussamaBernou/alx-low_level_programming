#include <math.h>
#include <stdio.h>

/*
 * is_prime - check if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 * Note: 1 is not prime
 */
int is_prime(int n)
{
	int i, sqrt_n;
	if (n <= 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	if (n % 2 == 0)
	{
		return 0;
	}
	sqrt_n = sqrt(n);
	for (i = 3; i <= sqrt_n; i += 2)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

/*
 * largest_prime - find the largest prime factor of a number
 * @n: number to factor
 * Return: largest prime factor
 */
int largest_prime(int n)
{
	int largest = 1;
	int d = 2;

	while (n > 1)
	{
		if (n % d == 0)
		{
			if (is_prime(d))
			{
				largest = d;
			}
			n /= d;
		}
		else
		{
			d++;
			if (d > n && largest == 1)
			{
				largest = n;
			}
		}
	}

	return largest;
}

/*
 * main - print the largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	int n, largest;

	n = 1231952;
	largest = largest_prime(n);

	printf("%d\n", largest);
	return 0;
}
