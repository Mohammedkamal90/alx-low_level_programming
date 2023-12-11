#include <stdio.h>
#include "search_algos.h"

/**
 * print_list - print content of listint_t
 * @list: pointer to head of list
 */
void print_list(const listint_t *list)
{
	if (list == NULL)
	{
		printf("List is empty\n");
		return;
	}

	printf("List:\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}
