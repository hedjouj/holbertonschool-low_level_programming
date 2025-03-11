#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings
 * @s1: array we want to concatenate
 * @s2: array we want to concatenate
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *copy;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; j++)
	{
	}
	for (i = 0; s2[j] != '\0'; j++)
	{
	}
	copy = malloc(sizeof(char) * (j + 1 + i));
	if (copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		copy[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		copy[i] = s2[j];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
