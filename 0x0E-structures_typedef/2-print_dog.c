#include "dog.h"

/**
 * print_dog - prints dog
 * @d: Pointer to the dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		printf("Name: (nil)");
		else
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
		else
	printf("Owner: %s\n", d->owner);
}
