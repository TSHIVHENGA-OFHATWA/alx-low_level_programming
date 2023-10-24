#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer header
 * @idx: index of the list
 * @n: data in the node
 * Return: address of the new node or NULL if failed, or not possible to add.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	size_t i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
