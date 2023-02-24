#include "main.h"

/**
 * print_numbers - print single digit numbers from 0 to 9
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
int digi;

for (digi = 48; digi <= 57; digi++)
	_putchar(digi);
_putchar('\n');
return (0);
}
