#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters to take from s2
 *
 * Return: A pointer to the newly allocated memory containing s1 + s2 (up to n)
 *         or NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *concat;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1 += 1;
	if (n < len2)
	{
		concat = malloc(sizeof(char) * len1 + n + 1);
	}
	else
	{
		concat = malloc(sizeof(char) * (len1 + len2) + 1);
	}
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1 ; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2 && j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
