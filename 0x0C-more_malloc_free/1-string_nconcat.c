#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - this is a function that adds two strings together
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 *
 * Return: returns a pointer pointing to the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, firstLen = 0, secondLen = 0;

	while (s1 && s1[firstLen])
	{
		firstLen++;
	}

	while (s2 && s2[secondLen])
	{
		secondLen++;
	}

	if (n < secondLen)
	{
		s = malloc(sizeof(char) * (firstLen + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (firstLen + secondLen + 1));
	}
	if (!s)
	{
		return (NULL);
	}
	while (i < firstLen)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < secondLen && i < (firstLen + n))
	{
		s[i++] = s2[j++];
	}
	while (n < secondLen && i < (firstLen + secondLen))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}
