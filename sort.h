#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * struct listint_s - Element of a doubly linked list
 *
 * @n: Int sorted in the node
 * @prev: The previous element of the list
 * @next: The next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* The printing functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* The sorting */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
