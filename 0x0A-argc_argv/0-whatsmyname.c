#include  <stdio.h>
#include <string.h>
/**
 * main:
 * return: always zero
 */
int main(int args, char *argv[])
{	int i;
	for (i = 0; i < args; ++i)
	{
	printf("%s\n", argv[0]);
	}
		return(0);
}
