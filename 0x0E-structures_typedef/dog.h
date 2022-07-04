#ifndef HEADER_H
#define HEADER_H
/**
 * struct dog - Dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct of a dog object
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
