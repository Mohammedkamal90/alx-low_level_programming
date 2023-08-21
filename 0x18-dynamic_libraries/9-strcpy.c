#include "main.h"

/**
 * char *_strcpy _ Function copy string point by src
 * @dest: Copy
 * @src:Copy of
 * return: String
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
