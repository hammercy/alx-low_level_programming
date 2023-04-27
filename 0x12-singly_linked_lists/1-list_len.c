#include <stdio.h>
#include "lists.h"
/**
 * list_len - counts the number of elts in list
 * @h: pointer to the first elt of the list.
 *
 * Return: number of elt in the list.
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		head = head->next;
		cnt++;
	}
	return (cnt);
}
