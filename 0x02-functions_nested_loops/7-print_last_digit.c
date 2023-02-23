#include "main.h"

/**
 * print_last_digit - return last digit
 * @r: number given
 * Return: int number
 */

int print_last_digit(int r)
{
int Last = 0;

if (r > 9)
{
Last = r % 10;
return (Last);
}
return (r);
}
