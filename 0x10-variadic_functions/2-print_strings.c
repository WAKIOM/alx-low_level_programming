#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - is a function that prints strings
 * @n: is the input
 * @separator: the separator input
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(ptr);
	printf("\n");
}
