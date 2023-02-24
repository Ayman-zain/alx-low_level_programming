#include "main.h"

/**
 * print_square - print a squre square.
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{

int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
}
}
}
