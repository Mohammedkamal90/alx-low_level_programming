#include <stdlib.h>
#include "dog.h"
/*
 * _strlen - a function that gets a length
 * @str: string to get length
 * return: length
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/*
 * _strcopy - a function that returns dest a copy of string
 * @src: string to copy
 * @dest: copy string
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/*
 * nes_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * return: struct pointer dog
 * NULL if fails func
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	/*if name and owner are empty return NULL*/
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
