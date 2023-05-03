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
	listint_t *ptrslow;
	listint_t *ptrfast;

	ptrslow = head;
	ptrfast = head;

	while (slow && fast && fast->next)
	{
		ptrslow = ptrslow->next;
		ptrfast = ptrfast->next->next;
		if (ptrslow == ptrfast)
			return (ptrslow);
	}
	return (NULL);
}
