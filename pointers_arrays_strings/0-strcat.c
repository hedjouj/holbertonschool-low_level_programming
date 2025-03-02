#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates twp character
 *@dest: the modified string
 *@src: the original string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
