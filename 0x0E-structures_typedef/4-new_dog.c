#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - computes the length of a string
 * @str: string to be computed
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		str++;
		size++;
	}
	return (size);
}

/**
 * _strcpy - copies a string to another location
 * @src: source
 * @dest: destination
 * Return: destination address
 */
char *_strcpy(char *src, char *dest)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name_len, owner_len;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	name_len = _strlen(name);
	ptr->name = malloc(sizeof(char) * name_len);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->name = _strcpy(name, ptr->name);
	owner_len = _strlen(owner);
	ptr->owner = malloc(sizeof(char) * owner_len);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->owner = _strcpy(owner, ptr->owner);
	ptr->age = age;
	return (ptr);
}
