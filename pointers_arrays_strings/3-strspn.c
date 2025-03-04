#include "main.h"

/**
 * _strspn - Calculate the length of the initial segment of s
 *           which consists only of bytes from accept.
 * @s: The string to be searched.
 * @accept: The string containing characters to match in s.
 *
 * Return: The number of characters in the initial segment of s
 *         which consist only of characters from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
		}
	return (count);
}
