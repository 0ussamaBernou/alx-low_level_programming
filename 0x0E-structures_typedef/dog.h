#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct
 * @name: his name
 * @age: his age
 * @owner: his owner
 *
 * Description: dog struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
