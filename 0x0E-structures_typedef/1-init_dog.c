#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: his name
 * @age: his age
 * @owner: his owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *my_dog;
	my_dog = d;

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}
