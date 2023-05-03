#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to a listint_t list,
 * at a given position
 * @head: pointer to the head of the listint_t list.
 * @idx: index of the listint_t where the new node is added
 * @n: integer for the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = last;
	*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
	if (last == NULL || last->next == NULL)
	return (NULL);

	last =  last->next;
	}
	new->next = last->next;
	last->next = new;

	return (new);
}
