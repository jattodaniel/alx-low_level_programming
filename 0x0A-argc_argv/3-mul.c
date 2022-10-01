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
int num1, num2, prod;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
prod = num1 * num2;

printf("%d\n", prod);
return(0);
}
