#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}


