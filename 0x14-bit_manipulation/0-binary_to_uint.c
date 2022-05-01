#include "main.h"

/***
 * binary_to_uint - function to convert a binary number to unsigned integer
 * @b: string containing the number
 * Return: returns the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decimal_val = 0;

	if (!b)
	{
		return (0);
	}

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		decimal_val = 2 * decimal_val + (b[j] - '0');
	}

	return (decimal_val);
}
