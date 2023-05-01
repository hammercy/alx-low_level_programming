#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - sum allthe data in the linked list.
 * @head: pointer to the list.
 *
 * Return: sum  on success 0 otherwise.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
