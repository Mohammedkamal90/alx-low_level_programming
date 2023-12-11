#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return:
 * - The index where 'value' is located in 'array'.
 * - (-1) if 'value' is not present in 'array'.
 *
 * Description:
 * This function performs binary search for 'value' in the given sorted 'array'
 * of 'size' elements. It prints the array being searched every time it changes.
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t left = 0, right = size - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
