#include <stdio.h>

/**
 * main - prints the result of the multiplication, followed by a new line.
 * @argc: number of arguments
 * @argv: array of pointers to the strings (arguments)
 * Return: 0
 */
int main(int argc, char *argv[])
{
        printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
