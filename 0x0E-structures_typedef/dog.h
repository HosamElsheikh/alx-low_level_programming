#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
/**
 * struct dog - a struct for a dog
 * @name: The name of the dog
 * @age: The age
 * @owner: The owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
