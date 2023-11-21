#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selection sort algo
 * @array: The array of integers to sort
 * @size: The size of the array being sorted
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, swap;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swap = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[swap])
				swap = j;
		}
		if (i != swap)
		{
			temp = array[i];
			array[i] = array[swap];
			array[swap] = temp;
			print_array(array, size);
		}
	}
}
