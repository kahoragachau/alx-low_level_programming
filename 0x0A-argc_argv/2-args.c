#include <stdio.h>

/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
