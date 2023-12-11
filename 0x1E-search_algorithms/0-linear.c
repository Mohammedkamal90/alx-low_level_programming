#include "search_algos.h"

/**
 * linear_search -  Function search for value in an array of
 * @size: Length of the array
 * @value: Value to look for
 * @array: Array to search in
 * Return: first index of value in array, otherwise -1.
*/
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (array[i] == value)
            return i;
    }

    return -1;
}
