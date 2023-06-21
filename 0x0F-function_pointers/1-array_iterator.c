#include "function_pointers.h"

/*
 * array_iterator - maps an array throw a func pointer
 * @size: array size
 * @array: int array
 * @action: function pointer
 * return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
