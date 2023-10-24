#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: the data(value) of the deleted element or node,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;

	return (n);
}
