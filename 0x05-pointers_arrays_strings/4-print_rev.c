#include "main.h"

/**
 * print_rev - this is a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string.
 */

void print_rev(char *s)
{

int i = 0;
char str;

while (*s != '\0')
{
	i++;
	s++;
}
s--;
	for (i; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
