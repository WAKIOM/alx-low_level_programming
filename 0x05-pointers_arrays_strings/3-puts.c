#include "main.h"
/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */
void _puts(char *str)
{
	int l;

	for (l = 0; *(str + l) != '\0'; l++)
	{
		_putchar(*(str + l));
	}
	_putchar('\n');
}
