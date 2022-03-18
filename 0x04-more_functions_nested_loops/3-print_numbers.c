#include "main.h"

/**
* print_numbers - prints numbers between 0-9
*/

void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		_putchar(j + "0");
	}

	_putchar("\n");
}
