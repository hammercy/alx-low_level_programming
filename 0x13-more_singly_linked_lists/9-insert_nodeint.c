#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts new node at given index postion.
 * @head: pointer to pointer of the linked list.
 * @idx: index position for the new node to be inserted.
 * @n: integer data of the new node.
 *
 * Return: address of the node on success NULL otherwise.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nwnode, *tmp;
	unsigned int i;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	nwnode = malloc(sizeof(nwnode));
	if (nwnode == NULL)
		return (NULL);
	nwnode->n = n;
	if (idx == 0)
	{
		nwnode->next = tmp;
		*head = nwnode;
		return (nwnode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
	}
	nwnode->next = tmp->next;
	tmp->next = nwnode;
	return (nwnode);
}
