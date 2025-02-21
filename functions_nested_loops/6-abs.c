#include "main.h"
/**
* _abs - computes the absolutes value of an integer
*@n: integer
* Return: Always 0.
*/

int _abs(int)
{
	int n = 2;
	int result = _abs(n);
	
	if (n < 0)
	{
		return -n;
	}
	else
	{
		return n;
	}

	return (0);
}
