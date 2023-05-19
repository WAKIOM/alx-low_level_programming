#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: returns nth node otherwise, returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
