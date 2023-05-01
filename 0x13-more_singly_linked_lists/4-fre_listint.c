#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t linked list.
 * @head: pointer to the linked list tobe freed.
 *
 */
void free_listint(listint_t *head)
{
	listint_t ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
