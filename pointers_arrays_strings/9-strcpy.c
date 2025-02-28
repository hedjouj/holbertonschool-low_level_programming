#include "main.h"

/**
 * _strcpy - copies the string pointed by src
 *@dest: pointer to the destrination array
 *@src: string which will be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
