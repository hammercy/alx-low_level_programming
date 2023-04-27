#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - append a node at the end.
 * @head: pointer of pointer to the head pointer
 * @str: a pointer to string to be added.
 *
 * Return: Null- if failed otherwise addrs new elt.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;

	new = malloc(sizeof(list_t));
	tail = *head;
	if (new == NULL || str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
	return (new);
}
