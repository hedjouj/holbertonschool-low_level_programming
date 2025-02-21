#include "main.h"
/**
 * int_isalpha(int c) - Entry point
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
