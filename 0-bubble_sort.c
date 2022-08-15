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
 * bubble_sort - sorts an array of integers in ascending order using
 * using the Bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: size of the array @array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, k, temp;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size - i - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				swap(array, k, k + 1);
				print_array(array, size);
			}
		}
	}
}
