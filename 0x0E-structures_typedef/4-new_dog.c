#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 *
 * @dest: pointer to the buffer in which we copy the string
 * @src: pointer to the string to copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to a string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * new_dog - create a new dog
 * @name: his name
 * @age: his age
 * @owner: his owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len, owner_len;
	if (name == NULL || owner == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = malloc(sizeof(char) * (name_len + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->name, name);

	my_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->owner, owner);

	my_dog->age = age;

	return (my_dog);
}
