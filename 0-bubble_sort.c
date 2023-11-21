#include "sort.h"

/**
  * swap_nums - Swaps integers during sorting
  * @a: The 1st num
  * @b: The 2nd num
  */

void swap_nums(int *a,int *b)
{
	int tmp;

	tmp = *a; 
	*a = *b;
	*b = tmp;
}

/**
  * bubble_sort - function that Sorts an array of integers in ascending order.
  * @array: The array of integers to be sort.
  * @size: size of the array.
  *
  * Description: Prints the array after each swap.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble_sort = 0;

	if (array == NULL || size < 2)
		return;

	while (bubble_sort == 0)
	{
		bubble_sort = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_nums(array + i, array + i + 1);
				print_array(array, size);
				bubble_sort = 0;
			}
		}
		len--;
	}
}
