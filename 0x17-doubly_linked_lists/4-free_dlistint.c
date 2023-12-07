#include "lists.h"

/**
 * free_dlistint - Frees dlistint_t list.
 * @head: pointer to current head node of list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
