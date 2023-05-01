#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - insert a new node at the beginning of the list.
 * @h: pointer to pointer of the singly linked list.
 * @n: data to be saved in the linked list.
 *
 * Return: address on success otherwise NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	*head = new;
	return (*head);
}
