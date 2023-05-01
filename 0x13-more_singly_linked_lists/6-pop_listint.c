#inlcude "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - delete head of node and return head node data.
 * @head: pointer to list.
 *
 * Return: head date on success 0 otherwise.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);
	return (n);
}
	
