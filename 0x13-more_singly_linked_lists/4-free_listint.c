#include "lists.h"
/**
 * free_listint - Free nodes and list
 * @head: This is my struct
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
