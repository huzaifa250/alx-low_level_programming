#include "lists.h"

/**
 * add_dnodeint - Adds a new head node to a dlistint_t.
 * @head: address of pointer to cuurent head node.
 * @n: The integer for the new node.
 *
 * Return: address of new node.If the function fails - NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
