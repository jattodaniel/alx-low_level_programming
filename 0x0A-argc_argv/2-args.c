#include <stdio.h>

/**
 * main - it prints all arguments received
 * @argc: array of pointers to the arguments
 * @argv: array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int arg;
for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);
return (0);
}
