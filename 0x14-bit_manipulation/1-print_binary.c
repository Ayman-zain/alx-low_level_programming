#include "main.h"
#include <stdio.h>
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number.
 * Return: void.
 *
 */
void print_binary(unsigned long int n)
{
int b[32], ind = 31, j, i, fn = 0;

if (n == 0)
{
	_putchar('0');
}
else
{
while (ind >= 0)
{
b[ind] = n & 1;
n = n >> 1;
ind--;
}
j = 0;
while (j < 32)
{
	if (b[j] == 1)
	{
		fn = j;
		break;
	}
	j++;
}
for (i = fn; i < 32; i++)
	_putchar(b[i] + '0');
}
}
