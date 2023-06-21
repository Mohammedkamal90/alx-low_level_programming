#include "function_pointers.h"

/*
 * int_index - search for integer
 * @array: the int array
 * @size: array size
 * @cmp: compare func
 * return: integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++
		}
