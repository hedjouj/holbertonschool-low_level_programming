#include "main.h"

/**
 * _puts - print a string in the output
 *
 *@str: string
 */

void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
