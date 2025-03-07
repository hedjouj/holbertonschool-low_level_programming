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
		printf("%s\n", argv[i]);
	}
	printf("%d\n", argc - 1);

	return (0);
}
