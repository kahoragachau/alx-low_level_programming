#include <stdio.h>
#include <stdlib.h>

/**
 * main - the mai function
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if not successful and 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
