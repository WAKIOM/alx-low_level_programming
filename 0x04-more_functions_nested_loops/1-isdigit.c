#include  "main.h"
/**
  * _isdigit - Checks for digits
  * @c: The character to be checked
  *
  * Return: 1 for digits and 0 for anything else
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
