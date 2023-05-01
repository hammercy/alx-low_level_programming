#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t linked list and set head to null.
 * @head: pointer to the linked list tobe freed.
 *
 */
void free_listint2(listint_t **head)
{
        listint_t *frd;

	if (head == NULL)
		return;
        while (*head != NULL)
        {
                frd = *head;
                *head = (*head)->next;
                free(frd);
        }
	*head = NULL;
}
