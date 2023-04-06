#include "main.h"
#include <stddef.h>
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, len;
	unsigned int bin = 1;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
		sum += bin;
		}
		else if (b[i] != '0')
		{
		return (0);
		}
		bin *= 2;
	}
	return (sum);
}
