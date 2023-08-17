#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * @head: head ptr to the list
 * @n: data of the node type of int
 *
 * Return: address of the new element or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;
	if (*head != NULL)
		(**head).prev = ptr;
	*head = ptr;
	return (ptr);
}
