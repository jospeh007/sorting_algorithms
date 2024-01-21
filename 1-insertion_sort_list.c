#include "sort.h"

/**
 * swap - swap the 2 nodes in doubly linked list
 * @a: Location of the 1st node
 * @b: Location of the 2nd node
 *
 * Return: void
 */
void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort_list - The insertion sort of doubly linked list
 * @list: location to head node
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *x, y;

	if (!list || !*list || !(*list)->next)
		return;
	x = (*list)->next;
	while (x)
	{
		y = x;
		x = x->next;
		while (y && y->prev)
		{
			if (y->prev->n > y->n)
			{
				swap(y->prev, y)
				if (!y->prev)
					*list = y;
				print_list((const listint_t *)*list);
			}
			else
				y = y->prev;
		}
	}
}
