#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 *get_op_func - returns a pointer to the function that corresponds
 *@s: the operator passed as argument
 *
 * Return: the result
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
{
	if (!strcmp(ops[i].op, s))
		break;
	i++;
}
return (ops[i].f);
}
