#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t linked list and set head to null.
 * @head: pointer to the linked list tobe freed.
 *
 */
void free_listint(listint_t *head)
{
        listint_t *ptr, *freed;

	ptr = head;
        while (ptr != NULL)
        {
                freed = ptr;
                ptr = ptr->next;
                free(freed);
        }
	head = NULL;
}
