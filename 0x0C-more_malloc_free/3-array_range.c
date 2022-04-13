#include <stdlib.h>
#include "main.h"

/**
 * *array_range - the array function
 * @min: parameter for minimum value
 * @max: parameter for maximum value
 * Return: Null if malloc fails
 */
int *array_range(int min, int max)
{
	int *pinter;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	pinter = malloc(sizeof(int) * size);
	if (pinter == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		pinter[i] = min++;
	}
	return (pinter);
}
