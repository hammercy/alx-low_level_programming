#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_sage - this fucntion prints listint_t linked list safely.
 * @head: pointer to pointer of the linked list to be reversed.
 *
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t cnt;
	const listint_t *ptrcrnt;

	ptrcrnt = head;

	for (cnt = 0; ptrcrnt != NULL; ++cnt)
	{
		printf("[%p] %d\n", (void *)ptrcrnt, ptrcrnt->n);
		ptrcrnt = ptrcrnt->next;
	}
	return (cnt);
}
