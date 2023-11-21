#include "sort.h"

/**
 * bubble_sort - func that sorts an array of integers in ascending order
 * @array: The array of integers being sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, sort_nums, sorted_nums;
	int temp;

	if (array == NULL || size < 2)
		return;

	sort_nums = size;
	while (sort_nums > 0)
	{
		sorted_nums = 0;
		for (i = 0; i < sort_nums - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				sorted_nums = i + 1;
				print_array(array, size);
			}
		}
		sort_nums = sorted_nums;
	}
}
