#include "main.h"

/**
 * flip_bits - returns the number of bits needed to one number to another.
 * @n: number 1
 * @m: second 1
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int d = 0;

while (x)
{
	if (x & 1ul)
		d++;
	x = x >> 1;
}
return (d);
}
