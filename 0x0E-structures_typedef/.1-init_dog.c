#include"dog.h"
#include<stdio.h>

/**
 * struct dog: structure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: ownner of a dog
 * init_dog: function to initialize a struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

