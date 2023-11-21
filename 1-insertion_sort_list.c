#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * @list: A double pointer to the head of the linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *old_node, *next_node;

	if (list == NULL || *list == NULL)
		return;
	old_node = (*list)->next;
	while (old_node != NULL)
	{
		next_node = old_node->next;
		while (old_node->prev != NULL && old_node->prev->n > old_node->n)
		{
			old_node->prev->next = old_node->next;
			if (old_node->next != NULL)
				old_node->next->prev = old_node->prev;
			old_node->next = old_node->prev;
			old_node->prev = old_node->next->prev;
			old_node->next->prev = old_node;
			if (old_node->prev == NULL)
				*list = old_node;
			else
				old_node->prev->next = old_node;
			print_list(*list);
		}
		old_node = next_node;
	}
}
