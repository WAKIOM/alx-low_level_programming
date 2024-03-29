#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - is a function that returns the sum of all its parameters
 * @n: is the integer parameter
 *
 * Return: sum or if n == 0, Return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
