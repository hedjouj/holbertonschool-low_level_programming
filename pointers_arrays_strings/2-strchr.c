#include "main.h"

/**
 * _strchr - check the code
 *@s: pointer
 *@c: pointer
 * Return: 0
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
			i++;

			if (c != '\0')

			{
				return ('\0');
			}
		}
	return (s);
}
