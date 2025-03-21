#include "variadic_functions.h"

/**
 * print_char - prints any given char
 * @args: argument
 */

void print_char(va_list *args)
{
	int character = va_arg(*args,int);
	printf("%c", character);
}

/**
 * print_int - prints any given integer
 * @args: argument
 */
void print_int(va_list *args)
{
	int number = va_arg(*args, int);

	printf("%d", number);
}

/**
 * print_float - prints any given float
 * @args: argument
 */
void print_float(va_list *args)
{
	float number = va_arg(*args, double);

	printf("%f", number);
}

/**
 * print_string - prints any string
 * @args: argument
 */
void print_string(va_list *args)
{
	char *string = va_arg(*args, char *);
	printf("%s", string);
}

/**
 * print_all - print everything it reveive as arguments
 * @format: list of types as string
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";
	va_list args;


	function_t function[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (function[j].id != '\0')
			if (format[i] == function[j].id)
			{
				printf("%s", separator);
				separator = ", ";
				function[j].fptr(&args);
				break;
			}

		j++;
	}
	i++;

	va_end(args);
	printf("\n");
}
