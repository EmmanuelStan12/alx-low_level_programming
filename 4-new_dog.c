#include "dog.h"

/**
 * new_dog: creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;
	dog_t *ptr;

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
	ptr = &my_dog;
	return (ptr);
}
