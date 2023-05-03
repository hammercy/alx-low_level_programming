#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_loop - finds the loop in a linked list
 * @head: pointer to the linked list
 *
 * Return: address of the start of loop , NULL otherwise
 */
const listint_t *find_loop(const listint_t *head)
{
	const listint_t *ptrslow = head, *ptrfast = head, *ptrcrnt = head;
	int i, lopcnt = 0, time = 4;

	while (ptrslow && ptrfast && ptrfast->next)
	{
		ptrslow = ptrslow->next;
		ptrfast = ptrfast->next->next;
		if (ptrslow == ptrfast)
			time++;
		if (time == 5 && (ptrfast != ptrslow))
			lopcnt++;
		if (time == 6)
		{
			while (time && ptrcrnt && ptrslow)
			{
				for(i = 0; i < lopcnt; i++)
				{
					if (ptrcrnt == ptrslow)
						break;
					ptrslow = ptrslow->next;
				}
				if (ptrcrnt != ptrslow)
					ptrcrnt = ptrcrnt->next;
				else
					return (ptrcrnt);
			}
		}
	}
	return (NULL);
}

/**
 * print_listint_sage - this fucntion prints listint_t linked list safely.
 * @head: pointer to pointer of the linked list to be reversed.
 *
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{

	const listint_t *ptrc, *ptrs;
	size_t cnt = 0;
	unsigned int time;

	if (head == NULL)
	{
		printf("-> [%p] %d", (void *)head, 98);
		exit(98);
	}
	ptrs = head;
	ptrc = find_loop(head);
	if (ptrc == NULL)
		time = 4;
	else
		time = 0;
	while (time < 1 && ptrs)
	{
		printf("[%p] %d\n", (void *)ptrs, ptrs->n);
		ptrs = ptrs->next;
		cnt++;
		if (ptrs == ptrc)
			time++;
	}
	while (head && time == 4)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		cnt++;
	}
	return (cnt);
}
