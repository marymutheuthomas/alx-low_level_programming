#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to structure dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog mydog = d;
	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
}

