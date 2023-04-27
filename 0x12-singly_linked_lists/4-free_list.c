#include <stdlib.h>
#include "lists.h"

/**
 * free-list - it frees a list_t list.
 * @head: pointer to fist node
 *
 * Description: this function  frees each memeory of
 * memory allocated by malloc.
 */
void free_list(list_t *head)
{
	list_t *thisnode;

	while (head)
	{
		thisnode = head;
		head = head->next;
		free(thisnode->str);
		free(thisnode);
	}
}
