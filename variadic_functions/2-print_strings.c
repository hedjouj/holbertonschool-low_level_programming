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
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
		va_end(args);
	}
