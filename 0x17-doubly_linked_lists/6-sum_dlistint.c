#include "lists.h"

/**
 * sum_dlistint - Return sum of all data n
 	 of doubly link list
 * @head: head of list
 * return: sum of  data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
