#include <iso646.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	char *sentence;
	if (last > 5)
		sentence = "and is greater than 5";
	else if (last == 0)
		sentence = "and is 0";
	else if (last < 6 && last != 0)
		sentence = "and is less than 6 and not 0";

	printf("Last digit of %i is %i %s\n", n, last, sentence);
	return (0);
}
