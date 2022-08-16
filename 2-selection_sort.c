#include "sort.h"

/**
 * swap - swap elements in an array
 *
 * @a:  array to swap elements in
 * @i: first element to swap
 * @j: second element to swap
 */
void swap(int a[], int i, int j)
{
	int temp;

	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: the array to be sorted with the algorithm
 * @size: size of the array @array
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i, k, min;

	for (i = 0; i < size; i++)
	{
		/* assume min is the first element */
		min = i;
		/* check smallest element in the rest of the list */
		for (k = i + 1; k < size; k++)
		{
			if (array[k] < array[min])
			{
				min = k;
			}
		}

		if (min != i)
		{
			swap(array, i, min);
			print_array(array, size);
		}
	}
}
