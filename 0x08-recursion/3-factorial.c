#include "main.h"

/**
 * factorial - function to factoriez a given integer
 * @n: integer to be factorialed
 * Return: -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
