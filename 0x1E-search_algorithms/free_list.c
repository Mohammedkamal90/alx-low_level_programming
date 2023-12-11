
#include <stdlib.h>
#include "search_algos.h"

/**
 * free_list - Deallocate singly linked list
 * @list: pointer to linked list to be free
 */
void free_list(listint_t *list)
{
	if (list)
	{
		free_list(list->next);
		free(list);
	}
}
