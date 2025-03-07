#include <stdio.h>

/**
 * main - entry point
 * @argc: argument
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	for (i = 0; i >= argc; i++)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
