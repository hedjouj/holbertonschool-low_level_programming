#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Write a function that locates a character in a string
 * @s: string
 * @c: character we searching
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;
	}

	if (c != '\0')
	{
		return ('\0');
	}
	return (s);
}
