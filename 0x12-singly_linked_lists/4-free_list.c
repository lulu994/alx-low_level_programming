#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: This is the linked listi
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(temp->str);
		free(head);
		head = temp;
	}
}
