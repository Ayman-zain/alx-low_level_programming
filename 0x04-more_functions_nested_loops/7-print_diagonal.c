#include "main.h"

/**
 *print_diagonal - a function that draws a diagonal line in the terminal
 *@n: how long the line will be
 *Return: void
 */

void print_diagonal(int n)
{

int i;
int j = 0;

if (n > 0)
{
for (i = 1; i <= n; i++)
{
	if (j > 0)
	{
	for (j = 0; j <= n; i++)
		_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
}
}
else 
{
_putchar('\n');
}
}
