#include "main.h"

/**
 * print_sign - print sign of number
 * @n: the character we need to check
 * Return: 1 if bigger than Zero and 0 if its Zero and print -1 if number less than 0
 */

int print_sign(int n)
{

if (n > 0)
{
	return (1);
	_putchar('+');
}
else if (n == 0)
{
	return (0);
	_putchar('0');
}
else
{
	return (-1);
	_putchar('-');
}
}
