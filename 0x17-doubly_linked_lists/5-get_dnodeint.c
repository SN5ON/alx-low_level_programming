#include "lists.h"

/**
 * get_dnodeint_at_index - gets a listint_t linked list node at a
 * a given index
 * @head: pointer to head list
 * @index: index of node to find
 *
 * Return: NULL
 */
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
