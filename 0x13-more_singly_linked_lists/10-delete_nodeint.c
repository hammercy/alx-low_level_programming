#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete node at n index.
 * @head: pointer of pointer to linkedlist of type listint_t.
 * @index: index position of the node tobe deleted.
 *
 * Return : 1 on success -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *crnt, *prev;
	unsigned int i = 0;

	crnt = *head;
	prev = NULL;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(crnt);
		return (1);
	}
	while (crnt != NULL && i < index)
	{
		prev = crnt;
		crnt = crnt->next;
		i++;
	}
	if (crnt == NULL)
		return (-1);
	prev->next = crnt->next;
	free(crnt);
	return (1);
}
