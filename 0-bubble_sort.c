#include "sort.h"


/**
 * swap - swap elements in an array
 *
 * @a - array to swap elements in
 * @i - first element to swap
 * @j - second element to swap
 */
void swap(int *a, int i, int j)
{
	int temp;

	temp = a[i];
	array[i] = a[j];
	array[j] = a[i];
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
	int i, j, temp;

	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i + 1])
		{
			swap(*array, i, i+1);

			for (j = 0; j < size; j++)
			{
				printf("%d", array[j]);
				if (j < size)
					printf(", ");
			}
			printf("\n");
		}
	}
}
