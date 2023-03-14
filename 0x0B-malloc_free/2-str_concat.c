#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string input
 * @s2: the second string input
 *
 * Return: a pointer that contains two strings
 */

char *str_concat(char *s1, char *s2)
{
	char *sp;
	int size1 = 0, size2 = 0, i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	sp = (char *) malloc(sizeof(char) * (size1 + size2 + 1));
	if (sp == 0)
		return (0);

	for (i = 0; i < size1; i++)
	{
		sp[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		sp[i] = s2[j];
		i++;
	}
	return (sp);
}
