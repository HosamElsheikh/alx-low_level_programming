#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = malloc(strlen(name) + 1);
		if (d->name != NULL)
		{
			strcpy(d->name, name);
			d->age = age;
			d->owner = owner;
		}
	}
}
