#ifndef DOG_H
#define DOG_H

typedef struct dog
{
	char *dog;
	float age;
	char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
