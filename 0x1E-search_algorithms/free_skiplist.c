#include <stdlib.h>
#include "search_algos.h"

/**
 * free_skiplist - Deallocate singly linked list
 * @list: Pointer to linked list to be free
 */
void free_skiplist(skiplist_t *list)
{
	if (list)
	{
		free_skiplist(list->next);
		free(list);
	}
}
