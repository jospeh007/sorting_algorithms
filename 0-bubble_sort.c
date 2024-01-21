#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers
 * by using bubble sort
 *
 * @array: array of integers
 * @size: THe size of array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t x, y;

	if (!array || !size)
		return;

	x = 0;
	while (x < size)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
		x++;
	}

}
