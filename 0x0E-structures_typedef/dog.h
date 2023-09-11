#ifndef DOG_H
#define DOG_H
#include <stddef.h>

/**
 * struct dog - Defines a structure representing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Description:
 * This struct represents information about a dog, including its name,
 * age, and the name of its owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
