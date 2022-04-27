#include "lists.h"

/**
 * print_listint - main function
 *
 * @h:linked list of type listint_int to print
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodenum++;
		h = h->next;
	}
	return (nodenum);
}
