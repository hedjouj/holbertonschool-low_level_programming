#include <stdio.h>


/**
* print_to_98 - Prints all number from n to nineeight
* @n: The first number
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
