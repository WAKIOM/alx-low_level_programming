#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a list
 * @head: double pointer to the head of the list
 * @n: int to be added in the new node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
