#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a specific index in a linked list
 * @head: pointer to first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = head;

	while (node && count < index)
	{
		/*continues as long as the pointer node is not NULL*/
		node = node->next;
		count++;
	}

	if (node != NULL)
		return (node);
	else
		return (NULL);
}
