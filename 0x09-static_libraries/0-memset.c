#include "main.h"

/**
* _memset - fill a block of memory
* @s: starting address
* @b: value
* @n: no of bytes
* Return: Always 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
