#include "main.h"

/**
 * swap_int - change the values of two integers
 *@a: the first integer
 *@b: second integer
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
