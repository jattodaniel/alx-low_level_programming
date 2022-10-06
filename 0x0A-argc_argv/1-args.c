#include <stdio.h>

/**
 * main - it prints the number of arguments
 *
 * @args: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: always 0
 *
 */
int main(int args, char *argv[])
{
	print("%d\n", args - 1);
	(void)argv;
	return (0);
}
