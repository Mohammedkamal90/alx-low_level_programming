#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * print_array - print content of array
 * @array: Source of array to print.
 * @r: Right index of array
 * @l: Left index of array
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index - search value in sort array using binary search
 * @array: Array to search
 * @r: Right index of array
 * @l: Left index of array
 * @value: Value to look
 * Return: First index of Value in array, otherwise -1.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_array(array, l, r);
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
		return (binary_search_index(array, l, m - 1, value));
	else if (value == *(array + m))
		return ((int)m);
	else
		return (binary_search_index(array, m + 1, r, value));
}

/**
 * binary_search - search Value in sort array use binary search
 * @array: Array to search in
 * @size: Length of array
 * @value: Value to look for
 * Return: Index of value in array, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}
