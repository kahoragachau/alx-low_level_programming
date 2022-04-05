#include <stdio.h>

/**
 * main - Is the Main Function
 * @argc: Is the number of command line arguments
 * @argv: is the vector/array containing  the program command line
 * Return: return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
