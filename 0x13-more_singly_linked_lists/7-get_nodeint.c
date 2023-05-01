#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the linked list.
 * @index: unsigned integer index of return data
 *
 * Return: nth node on success NULL oteherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *crntptr = head;
	unsigned int i;

	for (i = 0; crntptr != NULL && i < index; i++)
		crntptr = crntptr->next;
	return (crntptr);
}
