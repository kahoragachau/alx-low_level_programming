#include "lists.h"

/**
 * listint_len - the main function
 * @h: kinked list of type listint_t to traverse
 *
 * Return: number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
		nodenum++;
		h = h->next;
	}
	return (nodenum);
}
