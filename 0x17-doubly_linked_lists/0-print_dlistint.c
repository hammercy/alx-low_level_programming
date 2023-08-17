#include "lists.h"

/**
 * print_dlistint - print the elements of dlistint_t
 * @h: pointer to the head of the doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nnode = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		nnode++;
		ptr = ptr->next;
	}
	return (nnode);
}
