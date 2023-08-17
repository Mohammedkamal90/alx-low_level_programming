#include "lists.h"

/**
 * free_dlistint - Frees dlistint_t list
 * @head: Pointer head of List
 * return: nothing
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
