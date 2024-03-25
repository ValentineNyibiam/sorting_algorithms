#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	int sorted_index = 0, unsorted_index = 0, i = 0;
	int sorted_biggest;
	size_t smallest_chkr = 0;

	if (array == NULL)
		return;
	sorted_biggest = array[i];

	while (1)
	{
		if (array[i] == '\0')
		{
			if (smallest_chkr == 0)
			{
				i = sorted_index++;
				continue;
			}
			else
			{
				if (smallest_chkr == size)
					break;
				array[unsorted_index] = array[sorted_index];
				array[sorted_index] = sorted_biggest;
				i = sorted_index++;
				print_array(array, size);
				continue;
			}
		}
		if (array[i] < sorted_biggest)
		{
			sorted_biggest = array[i];
			unsorted_index = i;
			smallest_chkr++;
		}
		i++;
	}
}
