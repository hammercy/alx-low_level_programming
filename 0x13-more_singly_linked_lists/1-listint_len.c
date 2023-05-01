#include "lists.h"
#include <stdio.h>
/**
 * listint_len - counts the number of elements in tha linked listint_t list.
 * @h: pointer to the linked list.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t cnt;

	cnt = 0;
	ptr = h;
	if (h == NULL)
		return (0);
	while (ptr->next != NULL)
	{
		cnt++;
		ptr = ptr->next;
	}
	cnt++;
	return (cnt);
}
