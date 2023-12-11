#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_skiplist - dump content of skiplist_t
 * @list: pointer to head of lis
 * Return: Void
 */
void print_skiplist(const skiplist_t *list)
{
	const skiplist_t *node;

	if (list == NULL)
	{
		printf("Skiplist is empty\n");
		return;
	}

	printf("List:\n");
	for (node = list; node; node = node->next)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\nExpress lane (depth 0):\n");
	for (node = list; node; node = node->express)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\n");
}
