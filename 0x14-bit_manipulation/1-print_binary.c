#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to be converted.
 * Return: nothing
 */

void print_binary(unsigned long int n)
{

if (n == 0){
	_putchar('0');
} else
{
while (n > 0)
{
	if ((n & 1) == 0)
		_putchar('0');
	else
		 _putchar('1');
	n = n >> 1;
}
}
}
