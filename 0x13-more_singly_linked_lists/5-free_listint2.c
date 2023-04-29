#include "lists.h"
/**
 * free_listint2 - Free nodes and list and set head to null
 * @head: This is my struct
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
