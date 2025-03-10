#include "main.h"
#include <stdlib.h>

/**
 *
 */

char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	
	while (str[len] == '\0')
	{
		len++;
	}

	dup = (char *)malloc((len +1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';
	{
		return (dup);
	}
}
