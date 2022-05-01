#include "main.h"

/***
 * print_binary - function to print a number in binary
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0';)
		}
	}
	if (!count)
		_putchar('0');
}
