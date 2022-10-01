#include <unistd.h>

/**
 * _putchar - it weites the character c to stdout
 * @c: character to print
 *
 * Return: 1 if successful
 * On error, it returns -1 and errno is set separately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
