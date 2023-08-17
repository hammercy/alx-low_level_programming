#include "lists.h"

/**
 * dlistint_len - return the number of elements in linked lists
 * @h: pointer to the head of the dlistint_t list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nnode = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		nnode++;
		ptr = ptr->next;
	}
	return (nnode);
}
