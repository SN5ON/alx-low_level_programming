#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a double linked list.
 * @h: head of doubly linked list.
 *
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	nodes = 0;

	if (h == NULL)
	return (nodes);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
