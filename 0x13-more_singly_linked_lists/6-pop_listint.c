#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer
 *
 * Return: to popped value
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
