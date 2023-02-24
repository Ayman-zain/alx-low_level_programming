#include "main.h"

/**
 * print_most_numbers - print single digit numbers from 0 to 9 expect
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
int digi;

for (digi = 48; digi <= 57; digi++)
{
	if (digi != 50 && digi != 52)
		_putchar(digi);
}
_putchar('\n');
}
