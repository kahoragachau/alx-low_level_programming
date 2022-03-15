#include "main.h"

/**
* _islower - chcek if c is in lowercase
* @c: is a parameter
* Return: 1 if c is lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
