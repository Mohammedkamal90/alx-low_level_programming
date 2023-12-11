#include <stdio.h>

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

    return -1; // If the value is not found
}

int main(void)
{
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));

    return 0;
}
