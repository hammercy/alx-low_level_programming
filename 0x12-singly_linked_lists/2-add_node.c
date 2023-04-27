#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - insert node at the begining.
 * @head:  pointer to existed list
 * @str: pinter to a string to be copied.
 *
 * Return: address of the new elt.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}
