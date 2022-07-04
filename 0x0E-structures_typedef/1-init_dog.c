#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intializes a dog object
 * @d: pointer to dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
