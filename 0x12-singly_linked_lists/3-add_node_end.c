#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the address of first node.
 * @str: element in the node.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *mover;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node->str);
		return (NULL);
	}
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	mover = *head;
	while (mover->next != NULL)
	{
		mover = mover->next;
	}
	mover->next = new_node;
	return (new_node);
}
