#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * return void
 */
void print_alphabet_x10(void)

{
	char c;
	char d;

	for (d = 48; d <= 57; d++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{	_putchar(c);
	}
	{
		_putchar('\n');
	}
	}
}
