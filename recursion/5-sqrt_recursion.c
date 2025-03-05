#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root
 *@n: an integer
 * Return: the natural square root of n if it exists, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	int i;


	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	i = _sqrt_recursion(n - 1);

	if (i * i == n)
	{
		return (i);
	}

	else
	{
		return (i + 1);
	}
}
