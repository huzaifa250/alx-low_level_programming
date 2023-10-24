#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */

listint_t *find_listint_l(listint_t *head)
{
	listint_t *tmp, *node;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tmp = head->next;
	node = (head->next)->next;
	while (node != NULL)
	{
		if (tmp == node)
		{
			tmp = head;

			while (tmp != node)
			{
				tmp = tmp->next;
				node = node->next;
			}
			return (tmp);
		}
		tmp = tmp->next;
		node = (node->next)->next;
	}
	return (NULL);
}
