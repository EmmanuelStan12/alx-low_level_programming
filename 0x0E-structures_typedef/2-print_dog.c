#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the details of a dog
 * @d: dog object
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;
	if (d != NULL)
	{
		name = d->name == NULL ? "(nil)" : d->name;
		age = d->age;
		owner = d->owner == NULL ? "(nil)" : d->owner;
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
}
