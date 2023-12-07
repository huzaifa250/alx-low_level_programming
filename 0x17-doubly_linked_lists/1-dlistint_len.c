#include "lists.h"

/**
 * dlistint_len - calculate the length of  linked dlistint_t.
 * @h: The head of the dlistint_t.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
