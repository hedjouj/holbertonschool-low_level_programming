#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string
 *@str: character to copy
 *
 * Return - null or pointer
 */

char *_strdup(char *str)
{
	char *i = malloc(strlen(str) + 1);


	if (i == NULL)

	{
		return (NULL);
	}
	strcpy(i, str);

	return (str);
}
