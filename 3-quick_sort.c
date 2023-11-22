#include "sort.h"

/**
 * lomuto_partition - Finds the partition for quicksort using the Lomuto scheme.
 * @array: Array to sort.
 * @low: Lowest index of the partition to sort.
 * @high: Highest index of the partition to sort.
 * @size: Size of the array.
 *
 * Return: Index of the partition.
 */
size_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	ssize_t i, j;
	int temp, pivot;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}

	if (array[high] < array[i + 1])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quicksort - function sorts a partition of an array of integers.
 * @array: The array to sort.
 * @low: The lowest index of the partition to sort.
 * @high: The highest index of the partition to sort.
 * @size: The size of the array.
 *
 * Return: Nothing
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
	ssize_t pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Func sorts an array of integers in ascending order using the
 * Quick sort algorithm.
 * @array: The array being sort.
 * @size: The size of the array being sort.
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}

