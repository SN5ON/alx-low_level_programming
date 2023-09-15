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
	dlistint_t *tmp;
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
				tmp->next = h0->next;

				if (tmp->next != NULL)
					tmp->next->prev = tmp;
			}
			free(tmp);
			return (1);
		}
		h0 = tmp;
		tmp = tmp->next;
		i++;
	}

	return (-1);
}
