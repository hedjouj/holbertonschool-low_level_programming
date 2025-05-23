#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string
 *@str: character to copy
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
	}

	copy = malloc(sizeof(char) * j + 1);
	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
