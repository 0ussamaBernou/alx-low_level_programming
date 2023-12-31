#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and checks for null
 * @b: size of the memory to allocate
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
