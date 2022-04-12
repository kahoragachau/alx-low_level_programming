#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - does memory allocation using malloc
 * @b: parameter
 * Return: returns a pointer to the memory allocated
 */


void *malloc_checked(unsigned int b)
{
	void *pinter;

	pinter = malloc(b);

	if (pinter == NULL)
	{
		exit(98);
	}
	return (pinter);
}
