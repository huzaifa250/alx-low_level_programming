#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: number of nodes(number of elements in list)
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	/*Traverse the list, counting each node. */
	while (h != NULL)
	{
		node++;
		h = h->next;
	}

	return (node);
}
