#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the linked list
 * @next: Pointer to the next element of the linked list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *next;
	struct listint_s *prev;
} listint_t;

/* print functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* sort functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

/* swap function */
void swap(int a[], int x, int y);

#endif
