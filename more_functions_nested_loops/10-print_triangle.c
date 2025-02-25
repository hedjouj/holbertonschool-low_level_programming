#include "main.h"

/**
 * print_triangle - Print a triangle made with #
 *
 *@size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;


	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
