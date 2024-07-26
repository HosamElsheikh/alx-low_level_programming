#include "dog.h"

/**
 * free_dog - frees the dog
 * @d: The woof woof
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
