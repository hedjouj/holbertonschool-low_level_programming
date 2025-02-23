#include <stdio.h>

/**
 * print_to_98 prints all number from n to 98
 * @n: the starter
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}
