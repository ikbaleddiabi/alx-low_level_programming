#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h:the head of the nodes list.
 *
 * Return: to the number of the nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
