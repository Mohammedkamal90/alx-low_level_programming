#include "lists.h"

/**
 * get_dnodeint_at_index - Return nth node of dlistint_t link list
 * @index: Index of node to search, started from 0
 * @head: Pointer to head of list
 * return: Nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
