#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe -frees the memory used by listint_t linked list.
 * @h: pointer to pointer of the linked list to be freed.
 *
 * Return: size of the list freed.
 *
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptrcrnt, *ptrnext;
	size_t cnt;

	cnt = 0;
	ptrcrnt = *h;
	while (ptrcrnt != NULL)
	{
		ptrnext = ptrcrnt->next;
		free(ptrcrnt);
		ptrcrnt = ptrnext;
		cnt++;
	}
	*h = NULL;
	return (cnt);
}
