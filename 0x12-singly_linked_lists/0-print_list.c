#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: This take the value of the single list
 *
 * Return: Return: the number of nodes
 *         If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	 while (h)
	 {
		 if (!h->str)
		 {
			 printf("[0] (nil)\n");
		 }
		 else
		 {
			  printf("[%u] %s\n", h->len, h->str);
		 }
		  h = h->next;
		   s++;
	 }

	 return (s);
}
