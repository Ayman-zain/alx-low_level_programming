#include "main.h"

/**
 * print_square - print a squre square.
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{

int i,j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
	for (j = 1; j <= size; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
}
}
_putchar('\n');
}
