#include "main.h"

/**
 * _puts - this is a function that returns the length of a string.
 * @str: string.
 */

void _puts(char *str)
{

while (*str != '\0')
	_putchar(*str++);
_putchar('\n');
}
