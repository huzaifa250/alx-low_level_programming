#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list(head)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = *head;
	*head = NULL;
	while (node != NULL)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}

	return (*head);
}
