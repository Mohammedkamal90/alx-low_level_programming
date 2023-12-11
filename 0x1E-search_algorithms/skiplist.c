#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

void free_skiplist(skiplist_t *list);
void init_express(skiplist_t *list, size_t size);

/**
 * init_express - initialize express lane of linked list
 * @list: pointer to head node of list
 * @size: Number of nodes in list
 */
void init_express(skiplist_t *list, size_t size)
{
    const size_t step = sqrt(size);
    size_t i;
    skiplist_t *save = list;

    for (i = 0; i < size; ++i, list = list->next)
    {
        if (i % step == 0)
        {
            save->express = list;
            save = list;
        }
    }
}

/**
 * create_skiplist - create singly linked list with express lane
 * @array: pointer to  array used to fill list
 * @size: size of array
 * Return: pointer to head of created list(NULL on failure)
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
    skiplist_t *list = NULL;
    skiplist_t *node;
    size_t save_size = size;

    while (array && size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
        {
            free_skiplist(list);
            return NULL;
        }

        node->n = array[size];
        node->index = size;
        node->express = NULL;
        node->next = list;
        list = node;
    }

    init_express(list, save_size);
    return list;
}
