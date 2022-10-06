#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints the multiplication of two numbers
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int index, mult;

	mult = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		mult = mult * atoi(argv[index]);
	}
	printf("%d\n", mult);
	return (0);
}
