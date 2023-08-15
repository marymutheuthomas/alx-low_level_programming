#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog -  represent information of a dog
 * @name: The name of a dog
 * @age: The age of a dog
 * @owner: Owner of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
