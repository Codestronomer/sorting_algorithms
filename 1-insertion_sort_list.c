#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the insertion sort algorithm
 *
 * @list: head node of a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *curr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = i->next)
	{
		curr = i;
		j = curr->prev;
		while (j && curr->n < j->n)
		{
			/* if i is not the last element*/
			if (curr->next)
				curr->next->prev = j;
			j->next = curr->next;
			curr->next = j;
			curr->prev = j->prev;
			if (curr->prev)
				j->prev->next = curr;
			else
				*list = curr;
			j->prev = curr;
			print_list(*list);
			/* go to prev node */
			j = curr->prev;
		}
	}
}
