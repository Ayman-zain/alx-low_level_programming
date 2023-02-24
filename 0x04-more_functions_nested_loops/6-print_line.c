#include "main.h"

/**
 *print_line - a function that draws a straight line in the terminal.
 *@n: how long the line will be
 *Return: void
 */

void print_line(int n)
{

int i;

if (n > 0)
{
for (i = 1; i <= n; i++)
	_putchar(95);
}
_putchar('\n');
}
