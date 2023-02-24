#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal line in the terminal
 *@n: how long the line will be
 *Return: void
 */

void print_diagonal(int n)
{

int i;

if (n > 0)
{
for (i = 1; i <= n; i++)
{
	_putchar(92);
	_putchar('\n');
}
}
else 
{
_putchar('\n');
}
}
