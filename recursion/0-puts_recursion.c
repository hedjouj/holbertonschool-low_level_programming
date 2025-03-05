#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the pointer
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
	}
}
