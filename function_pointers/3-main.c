#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Performs simple operations
 *        division, and modulo) based on user input.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: the result of the operation or the appropriate error status
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*fonction)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fonction = get_op_func(argv[2]);

	if (*fonction == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = fonction(num1, num2);
	printf("%d\n", result);
	{
		return (0);
	}
}
