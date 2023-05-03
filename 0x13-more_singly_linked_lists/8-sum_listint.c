#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t.
 * @head: pointer to the head node in the listint_t linked list.
 *
 * Return:0, if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *last = head;

	while (last)
	{
	sum += last->n;
	last = last->next;
	}
	return (sum);
}
