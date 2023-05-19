#include "lists.h"
/**
 * dlistint_len - returns number of elements in a double linked list
 *
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
