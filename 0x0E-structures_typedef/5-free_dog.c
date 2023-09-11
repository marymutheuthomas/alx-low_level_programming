#include<stdlib.h>
#include"dog.h"

/**
 * free_dog - free struct
 * @d: typedef struct to free
 * Return: void type
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
