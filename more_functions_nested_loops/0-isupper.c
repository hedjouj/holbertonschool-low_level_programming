#include "main.h"

/**
 * _isupper - check if its an uppercase.
 * @c: the letter
 * Return: Always 0 or 1
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
