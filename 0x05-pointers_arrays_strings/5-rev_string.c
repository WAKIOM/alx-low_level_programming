#include "main.h"
#include "2-strlen.c"
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i;
	char d;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		d = s[i];
		s[i] = s[_strlen(s) - (i + 1)];
		s[_strlen(s) - (i + 1)] = d;
	}
}
