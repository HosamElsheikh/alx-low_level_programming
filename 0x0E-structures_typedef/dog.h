#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's information
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
