#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initiates a dog struct
 * @d: Pointer to the dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
