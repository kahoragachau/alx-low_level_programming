#include "lists.h"

/**
 * add_nodeint - adds a new nodeat the beginning of a linked list
 * @head: first node in list
 * @n: data to insert to that new node
 * Return: pointer to the new node, NULL if otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
