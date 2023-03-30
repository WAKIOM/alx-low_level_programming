#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		printf("[%u] ", node->len);
		if  (node->str != NULL)
			printf("%s\n", node->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		node = node->next;
		count++;
	}
	return (count);
}

