#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d == NULL)
		return;

	name = d->name;
	age = d->age;
	owner = d->owner;

	if (owner == NULL)
		owner = "(nil)";
	if (name == NULL)
		name = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s", name, age, owner);
}
