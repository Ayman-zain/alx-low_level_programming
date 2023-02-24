#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
int digi;
int i;

for (i = 0; i < 10; i++)
{
for (digi = 0; digi <= 14; digi++)
	{
	 _putchar(digi + '0');
	}
_putchar('\n');
}
_putchar('\n');
}
