#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - inserts a node at position
 * in a dlistint_t linked list
 *
 * @index: index to insert new node
 * @head: head of the list
 * Return: 1 (success), -1 (failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h0;
	dlistint_t *h1;
	unsigned int i;

	h0 = *head;

	if (h0 != NULL)
		while (h0->prev != NULL)
			h0 = h0->prev;
	i = 0;

	while (h0 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h0->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h1->next = h0->next;

				if (h1->next != NULL)
					h0->next->prev = h1;
			}
			free(h0);
			return (1);
		}
		h1 = h0;
		h0 = h0->next;
		i++;
	}

	return (-1);
}
