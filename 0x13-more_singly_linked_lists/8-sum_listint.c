#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in a listint_t list
 * @head: pointer to first node in the linked list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
