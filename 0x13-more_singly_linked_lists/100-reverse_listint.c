#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - this fucntion reverse a listint_t linked list.
 * @head: pointer to pointer of the linked list to be reversed.
 *
 * Return: pointer to the add reversed list  NULL otherwise.
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptrprev, *ptrnext;

	ptrprev = NULL;
	ptrnext = NULL;
	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		ptrnext = (*head)->next;
		(*head)->next = ptrprev;
		ptrprev = *head;
		*head = ptrnext;
	}
	*head = ptrprev;
	return (*head);
}
