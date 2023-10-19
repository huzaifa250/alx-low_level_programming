#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: address of pointer to head node
 * @str: string field of node
 *
 * Return: the address of the new node, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = len;
	new_head->next = (*head);
	(*head) = new_head;

	return (*neaw_head);
}
