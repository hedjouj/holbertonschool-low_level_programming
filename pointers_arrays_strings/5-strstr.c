#include "main.h"
/**
 * _strstr - locates the substring
 *
 * @haystack: The character to print
 * @needle: The character to print
 *
 * Return: character.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		if (haystack[i] != needle[0])
		{
			continue;
		}
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
