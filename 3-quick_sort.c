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
 * partition - partition the array and get the pivot index
 *
 * @a: array to be partitioned
 * @lo - first index
 * @hi - last index
 * @size - size of the array @array
 * Return: partiion index
 */
int partition(int a[], int lo, int hi, size_t size)
{
        /* choose the last element as the pivot */
        int pivot = hi;
        /* temporary pivot index */
        int i = lo;
        int j;

        for (j = lo; j < hi; j++)
        {
                /* If the current element is less than or equal to the pivot*/
                if (a[j] <= a[pivot])
                {
                        /* Move the temporary pivot index forward */
                        if (j != i)
                        {
                                /* swap the current element with the element at the
                                temporary pivot index */
                                swap(a, i, j);
                                print_array(a, size);
                        }
                        i++;
                }
        }

        /* move the pivot element to the correct pivot position */
        if (a[pivot] < a[i])
        {
                swap(a, pivot, i);
                print_array(a, size);
        }
        return (i);
}

/**
 * QuickSort - sorts a portion of the array, diveides it into
 * partitions, then sorts those
 *
 * @array: array to be sorted
 * @lo: first index of the array or subarray
 * @hi: last index of the array or subarray
 * @size: size of the array @array
 */
void QuickSort(int a[], int lo, int hi, size_t size)
{
        int p;

        /* check if indices are correct order */
        if (lo >= hi || lo < 0)
                return;

        /* partition array and get the pivot index */
        if (lo < hi)
        {
                p = partition(a, lo, hi, size);

                /* sort the two partitions */
                QuickSort(a, lo, p - 1, size);
                QuickSort(a, p + 1, hi, size);
        }
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 *
 * @array: array to be sorted by the algorithm
 * size: Size of the array @array
 */
void quick_sort(int *array, size_t size)
{
        if (array == NULL || size < 2)
                return;

        QuickSort(array, 0, size - 1, size);
}