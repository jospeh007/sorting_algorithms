#include "sort.h"

/**
 * selection_sort - Sorts using selection sort algorithms
 *
 * @array: to be sorted
 * @size: The size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, l;
	int temp;

	if (!array || !size)
		return;
	for (x = 0; x < size - 1; x++)
	{
		for (y = size - 1, l = x + 1; y > x; y--)
		{
			if (array[y] < array[l])
			{
				l = y;
			}
		}
		if (array[x] > array[l])
		{
			temp = array[x];
			array[x] = array[l];
			array[l] = temp;
			print_array(array, size);
		}
	}
}
