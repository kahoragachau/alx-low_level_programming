#include "lists.h"

/**
 * list_t *add_node - Function to add node at the beginning
 * @head: The first Node
 * @str: the string
 * Return: Returns the address of head node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
