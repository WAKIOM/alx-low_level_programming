#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of list
 *
 * @head: pointer to first node
 * @n: int added to the new node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, **ptr;

	new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = NULL;
		ptr = head;

			if (*ptr == NULL)
			{
				*ptr = new;
			}
			else
			{
				while (*ptr)
				{
				ptr = &(*ptr)->next;
				}
				(*ptr) = new;
			}
	return (new);
}
