#include "main.h"

/**
 * swap_int - it swaps the value of two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int num;

	num  = *a;
	*a = *b;
	*b = num;
}
