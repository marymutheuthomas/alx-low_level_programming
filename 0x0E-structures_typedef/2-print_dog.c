#include<stdio.h>
#include"dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to structure dog
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("(nil)\n");
		else
		{
			printf("Name: ");
			printf("%s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
		{
			printf("Owner: ");
			printf("%s\n", d->owner);
		}
	}
}
