#include "main.h"
#include <string.h>

/**
 * rev_string - reverse the string
 * @s: the sstring we want to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int length = 0;
	int j = length - 1;


	if (s == NULL)
	{
		return;
	}


	while (s[length] != '\0')
	{
		length++;
	}
	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
