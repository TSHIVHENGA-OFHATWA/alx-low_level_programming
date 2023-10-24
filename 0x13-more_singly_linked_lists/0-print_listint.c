#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head pointing to first node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (ptr->next != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	printf("%d\n", ptr->n);
	return (count);
}
