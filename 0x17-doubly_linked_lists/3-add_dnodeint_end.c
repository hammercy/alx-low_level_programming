#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end
 * @head: head ptr to the list
 * @n: data of the node type of int
 *
 * Return: address of the new element or NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *ptr_t;

	ptr = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		ptr->prev = NULL;
	}
	else if (*head != NULL)
	{
		ptr_t = *head;
		while (ptr_t->next != NULL)
		{
			/*	printf("while\n"); */
			ptr_t = ptr_t->next;
		}
		ptr->prev = ptr_t;
		ptr_t->next = ptr;
	}
	return (ptr);
}
