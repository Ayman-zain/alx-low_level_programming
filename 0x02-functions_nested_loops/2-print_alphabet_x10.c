#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
char i;
char mult;

for (mult = 1; mult <= 10; mult++)
{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
return;
}
