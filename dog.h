/**
 * struct dog - Dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct of a dog object
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
