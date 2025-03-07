#include <stdio.h>
/*
 * main: - entry point
 * return: always 0
 */
int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	{
		printf("Argument %d : %s\n", i, argv[i]);
	}
	printf("Nombre d'arguments : %d\n", argc);

	return (0);
}
