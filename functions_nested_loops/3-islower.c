#include "main.h"
/*
 *int _islower(int c) - Checks for a lowercase character
 *return - stop executing
 *_islower - check for lowercase char
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
