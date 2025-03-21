#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - display numbers separate with comma
 * @separator: sĂparateur entre les nombres
 * @n: nombre d'arguments
 * @...: Liste des nombres
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
