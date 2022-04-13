#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - the main function
 * @nmemb: the number of elements in an array
 * @size: the size of each element
 * Return: pointer of the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pinter;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pinter = malloc(nmemb * size);
	if (pinter == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		pinter[i] = 0;
	}
	return (pinter);
}
