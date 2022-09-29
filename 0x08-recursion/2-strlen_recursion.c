#include "main.h"

/**
* _strlen_recursion - it calculates the length of a string
* @s: the string to be used
*
* Return: the length of the string
*/
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
