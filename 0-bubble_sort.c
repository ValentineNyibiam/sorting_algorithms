#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers using the bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array to be sorted
 */
void bubble_sort(int *array, size_t size)
{
	size_t index = 0, swap_check = 0;
	int temp;

	while (index < 10)
	{
		if (index == (size - 1))
		{
			if (swap_check == 0)
				break;
			index = 0;
			swap_check = 0;
			continue;
		}
		if (array[index] > array[index + 1])
		{
			temp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = temp;
			swap_check++;
			print_array(array, size);
		}
	index++;
	}
}
