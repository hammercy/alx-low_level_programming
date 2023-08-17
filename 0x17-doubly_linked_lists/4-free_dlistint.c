#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head ptr to the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *ptr_f;

	ptr = head;
	ptr_f = head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		free(ptr_f);
		ptr_f = ptr;
	}
	free(ptr_f);
}
