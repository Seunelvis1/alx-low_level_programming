#include "lists.h"

/**
 * print_listint - will print all the elements in a linked list
 * @h: is the linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t dig  = 0;

	while (h)
	{
		printf("%d\n", h->n);
		dig++;
		h = h->next;
	}

	return (dig);
}
