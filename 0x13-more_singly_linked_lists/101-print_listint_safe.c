#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list.
 * @head: pointer to the first node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_p = NULL;
	const listint_t *current = NULL;
	size_t counter = 0;
	size_t num_n;/*keep track num of nodes */

	tmp_p = head;
	while (tmp_p)
	{
		printf("[%p] %d\n", (void *)tmp_p, tmp_p->n);
		counter++;
		tmp_p = tmp_p->next;
		current = head;
		num_n = 0;
		while (num_n < counter)
		{
			if (tmp_p == current)
			{
				printf("-> [%p] %d\n", (void *)tmp_p, tmp_p->n);
				return (counter);
			}
			current = current->next;
			num_n++;
		}
		if (head == NULL)
			exit(98);
	}
	return (counter);
}
