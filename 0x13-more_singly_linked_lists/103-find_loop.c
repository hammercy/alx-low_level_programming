#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_sage - this fucntion prints listint_t linked list safely.
 * @head: pointer to pointer of the linked list to be reversed.
 *
 * Return: the number of nodes.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptrs;
	listint_t *ptrf;

	ptrs = head;
	ptrf = head;

	while (ptrs && ptrf && ptrf->next)
	{
		ptrs = ptrs->next;
		ptrf = ptrf->next->next;
		if (ptrs == ptrf)
			return (ptrs);
	}
	return (NULL);
}
