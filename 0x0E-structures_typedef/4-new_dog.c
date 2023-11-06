#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len, i;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_len = 0;
	owner_len = 0;
	if (name)
	{
		while (name[name_len])
			name_len++;
	}
	if (owner)
	{
		while (owner[owner_len])
			owner_len++;
	}
	new_name = malloc(name_len + 1);
	new_owner = malloc(owner_len + 1);
	if (!new_name || !new_owner)
	{
		free(new_name);
		free(new_owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		new_name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		new_owner[i] = owner[i];
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
