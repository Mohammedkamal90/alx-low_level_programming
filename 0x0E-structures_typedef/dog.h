#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog info
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Description: Long description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
