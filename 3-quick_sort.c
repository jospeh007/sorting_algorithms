#include "sort.h"

/**
 * swap - swap two integers values
 * @array: Sorted integers
 * @size: Size of the array
 * @a: Location of the 1st value
 * @b: Location of the 2nd value
 * 
 * Return: void
 */
void swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_partition - the array partition
 * @array: Sorted integers
 * @size: Size of the array
 * @low: Low index of the sort range
 * @high: High index of the sort range
 *
 * Return: size_t
 */
size_t lomuto_partition(int *array, size_t size, ssize_t low, ssize_t high)
{
	int x, y, pivot = array[high];

	for (x = y = low; y < high; y++)
		if (array[y] < pivot)
			swap(array, size, &array[y], &array[x++]);
	swap(array, size, &array[x], &array[high]);

	return (x);
}

/**
 * quicksort - quick sort using lomuto partitions
 * @array: Sorted integers
 * @size: Size of the array
 * @low: Low index of the sort range
 * @high: High index of the sort range
 *
 * Return: void
 */
void quicksort(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t p = lomuto_partition(array, size, low, high);

		quicksort(array, size, low, p - 1);
		quicksort(array, size, p + 1, high);
	}
}

/**
 * quick_sort - quick sort function
 * @array: Sorted integers
 * @size: Size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array ||!size)
		return;
	quicksort(array, size, 0, size - 1);
}
