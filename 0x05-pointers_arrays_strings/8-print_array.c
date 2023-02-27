#include "main.h"
#include "stdio.h"
/**
 * print_array - function definition
 * Description: prints specified array elements
 * @a: the array pointer
 * @n: the number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
