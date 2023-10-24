#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer point to first node.
 * @index: index of the node.
 * Return: nth node OR NULL if the node does not exist,
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;
	listint_t *new_node = head;

	while (new_node != NULL)
	{
		if (count == index)
			return (new_node);

	new_node = new_node->next;
	count++;
	}
	return (NULL);
}
