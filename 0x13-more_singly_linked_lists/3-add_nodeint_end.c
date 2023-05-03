#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: a pointer
 * @n: new valeur
 *
 * Return: to the pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *new_node;

        if (!head || !new_node)
                return (NULL);

        new_node->next = NULL;
        new_node-> = n;
        if (!*head)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}	
        return (new_node);
}
