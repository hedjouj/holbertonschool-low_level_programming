#include "main.h"

/**
 * _isdigit - checks for a digit
 *@c: the number
 * Return: 1 ou 0
 */

int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

