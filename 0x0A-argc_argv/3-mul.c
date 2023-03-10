#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int mul;

	if (argc != 3)
	{
		printf("error\n");
			return (1);
	}
		mul = num1 * num2;
		printf("%d\n", mul);

	return (0);

}
