#include "main.h"

/**
 * _strlen _ Return length of string
 * @s: A String
 * return: Length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
