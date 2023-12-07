#include "lists.h"

/**
 * sum_dlistint - sums of all the elements of a dlistint_t list.
 * @head: pointer to current head of the dlistint_t list.
 *
 * Return: The sum of all the elements.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
