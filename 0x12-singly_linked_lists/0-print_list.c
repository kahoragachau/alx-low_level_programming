#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements in a linked list
 * @h: Parameters of pointers list t be printed
 * Return: The number of nodes printed
 * 
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h -> str)
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
