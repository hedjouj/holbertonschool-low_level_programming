#include "main.h"
#include <string.h>

/**
 * rev_string - reverse the string
 * @s: the pointer
 */

void rev_string(char *s)
{
	int l = 0;
	int r = strlen(s) - 1;
	char t;

	while (l < r)
	{
		t = s[l];
		s[l] = s[r];
		s[r] = t;

		l++;
		r--;
	}
}
