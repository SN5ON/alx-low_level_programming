#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the head node in listint_t linked list.
 *
 * Return:a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *last = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = last;
	last = *head;
	*head = next;
	}
	*head = last;

	return (*head);
}
