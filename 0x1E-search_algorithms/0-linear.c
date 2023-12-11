#include "search_algos.h"

/**
 * linear_search -  Function search for value in an array of
 * 		integer using linear searc
 * @size: Length of the array
 * @value: Value to look for
 * @array: Array to search in
 * Return: first index of value in array, otherwise -1.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
