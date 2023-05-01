#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - appends a new node at the end.
 * @head: pointer to pointer of the linked listint_t
 * @n: integer to be appended
 *
 * Return: address of the new elt on success NuLL otherwise.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(*new));
	if (head == NULL)
		return (NULL);
	ptr = *head;
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		if (ptr == NULL)
		{
			*head = new;
			return (new);
		}
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	else
		return (NULL);
	return (new);
}
