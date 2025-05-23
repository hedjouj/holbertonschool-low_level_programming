#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory of an array
 *@*ptr: pointer
 *@nmemb: unsigned int
 *@size: the size of the memory to print
 * Return: null or ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
