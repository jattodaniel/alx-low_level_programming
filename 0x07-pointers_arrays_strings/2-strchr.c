#include "main.h"

/**
 * _strchr - Entry point
 * @s: string pointed to
 * @c: input
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[i] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
