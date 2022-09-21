#include "main.h"

/**
 * _strlen - it returns length of string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
