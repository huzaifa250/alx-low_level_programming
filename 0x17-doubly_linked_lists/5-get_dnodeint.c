#include "lists.h"

/**
 * get_dnodeint_at_index - return node  at given index.
 * @head: point to current head node.
 * @index: The index of node to return.
 * Return: address of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
