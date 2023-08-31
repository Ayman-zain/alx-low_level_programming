#include "main.h"
#include <string.h>
/**
 * sq - get 2^n
 * @n: power of 2
 * Return: 2 square n
 *
 */
int sq(int n)
{
int m = 1;

while (n--)
	m = m * 2;
return (m);
}
/**
 * binary_to_uint - convert binary to dec.
 * @b: string of number to be converted
 * Return: base 10 number if the number sended was binary and null otherwise.
 *
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int sum = 0;
int l = strlen(b);
int x = l - 1;
int a = 0;

if (!b)
	return (0);
while (l--)
{
	if (b[i] == '0')
	a++;
	else if (b[i] == '1')
		sum += sq(x);
	else
		return (0);
	i++;
	x--;
}
return (sum);
}
