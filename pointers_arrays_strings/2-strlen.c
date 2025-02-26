#include "main.h"

/**
 * _strlen - calculate the lengt of a char
 *
 * @s: the pointer of the char
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);
}
