#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: A pointer to the head of the list_t list
 *
 * Return: number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		/*update head pointer to point to next node */
		h = h->next;
	}

	return (nodes);
	/*return num of nodes in linked list */
}
