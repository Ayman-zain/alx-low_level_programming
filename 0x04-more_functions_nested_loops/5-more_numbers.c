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
	 if (digi >= 10)
	_putchar(digi / 10 + '0');
 	_putchar(digi % 10 + '0');

	}
}
_putchar('\n');
}
