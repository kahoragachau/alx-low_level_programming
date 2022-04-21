#include "lists.h"

/**
 *list_len - the main function
 *
 * @h: Pointer Parameter
 * Return: Number of elements in the List
 */

size_t list_len(const list_t *h)
{
	size_t nextelem = 0;

	while (h != NULL)
	{
		h = h->next;
		nextelem++;
	}
	return (nextelem);
}
