#include "main.h"
/**
 * print alphabet _x10 - print 10 times the alphabet
 *
 * Return: always success
 */
void print_alphabet_x10(void)
{

int n, co;
co = 0;

while(co < 10)
{

for (n = 'a'; n<= 'z'; n++)
{

_putchar(n);

}

co++;

_putchar('\n');

}

}
