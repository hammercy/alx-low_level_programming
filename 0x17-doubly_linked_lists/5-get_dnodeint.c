#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node at given index
 * @head: head ptr to the list
 * @index: index of the node to be returned.
 *
 * Return: address of the nth node or NULL  if failed.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	ptr = head;
	if (index == 0)
		return (ptr);
	for (i = 1; i < index + 1 && ptr->next != NULL; i++)
		ptr = ptr->next;
	if (i >= index)
		return (ptr);
	else
		return (NULL);
}
