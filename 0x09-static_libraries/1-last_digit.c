#include <iso646.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main func
 * Return: 0 if all run as expected
 */
int main(void)
{
	int n, last;
	char *sentence;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
		sentence = "and is greater than 5";
	else if (last == 0)
		sentence = "and is 0";
	else if (last < 6 && last != 0)
		sentence = "and is less than 6 and not 0";

	printf("Last digit of %i is %i %s\n", n, last, sentence);
	return (0);
}
