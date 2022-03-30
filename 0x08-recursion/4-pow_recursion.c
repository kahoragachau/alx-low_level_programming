#include "main.h"

/**
 * _pow_recursion - function to raise a number by another number
 * @x: first parameter number to be raised by
 * @y: Second Parameter number to be raised to
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
