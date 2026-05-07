#include "sort.h"

/**
 * swap_nodes - swaps two nodes
 * @list: head of the list
 * @first: first node
 * @second: second node
 */
void swap_nodes(listint_t **list, listint_t *first, listint_t *second)
{
	if (first->prev != NULL)
		first->prev->next = second;
	else
		*list = second;

	if (second->next != NULL)
		second->next->prev = first;

	first->next = second->next;
	second->prev = first->prev;
	second->next = first;
	first->prev = second;
}

/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next_node = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			swap_nodes(list, current->prev, current);
			print_list(*list);
		}

		current = next_node;
	}
}
