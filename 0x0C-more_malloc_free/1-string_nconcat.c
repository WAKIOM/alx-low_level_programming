#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - Allocates memory using malloc.
 * @n: The number of characters to concatinate
 *
 * Return: A pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	char * ptr;
	size_t s1len = strlen(s1);
	size_t s2len = strlen(s2);
	
	if(n < s2len)
	{
		s2len = n;
	}
	ptr = malloc(s1len + s2len + 1);
	if(ptr == NULL)
	{
		return(NULL);
	}
	strncpy(ptr, s1, s1len);
	strncat(ptr, s2, s2len);
		return(ptr);
}
