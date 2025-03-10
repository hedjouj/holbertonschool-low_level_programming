#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractères
 * @size: array size
 * @c: character to initialise
 *
 * Return: pointeur vers le tableau alloué, ou null si échoue
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));

	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
