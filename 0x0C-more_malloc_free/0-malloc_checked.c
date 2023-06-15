#include "main.h"

/*
 *malloc_check - allocates memory using malloc
 *b:int
 *return: pointer to the array
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);

}
