#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * using the insert sort algorithm
 * @list: A pointer to the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	/*int index = 0;*/
	int i = 0; 
	listint_t *current;

	if (list == NULL || *list == NULL)
		return;

	current = *list;
	print_list(current);
	while(i <= 1)
	{
		if (i == 1)
			break;
		current = current->next;
		i++;
	}
	printf("%d\n",current->n);
	/*while(current->next != NULL)
	{
		if (current->n < current->prev->n)
		{

		}
		current = current->next;
	}*/
}
