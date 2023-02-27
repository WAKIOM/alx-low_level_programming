#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - function definition
 * Description: prints half a string
 * @str: the string pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int string_len = _strlen(str);

	if (string_len % 2 != 0)
	{
		i = (string_len / 2) + 1;
	}
	else
	{
		i = (string_len / 2);
	}

	while (i < string_len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
