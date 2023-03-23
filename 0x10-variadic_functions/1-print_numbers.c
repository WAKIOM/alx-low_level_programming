#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - is a function that prints numbers
 * @n: is the integer input
 * @separator: the separator input
 *
 * Return: numbers entered as arguments to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(ptr);
	printf("\n");
}
