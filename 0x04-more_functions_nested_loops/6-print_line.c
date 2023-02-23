#include "main.h"
/**
 * print_line - prints a line if n is more that 0
 * @n: the number of lines to draw
 * return void
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < n; x++)
	{
		_putchar(95);
	}
}
