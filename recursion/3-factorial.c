#include "main.h"
/**
 * factorial - returns the factorial of a number
 *@n: the number
 * Return: error
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (n - 1);
	}
	return (n * factorial(n - 1));
}
