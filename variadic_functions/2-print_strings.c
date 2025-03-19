#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - display string separate with comma
 * @separator: sÃparateur entre les nombres
 * @n: nombre d'arguments
 * @...: Liste la string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str,

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s", va_arg(args, char));

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}

		if (str == NULL)
		{
			printf("(nil)");
			else
				printf("%s", str);
	}
	printf("\n");
	va_end(args);
}
