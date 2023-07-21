#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of args
 * Return: void
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i, j, sum = 0;

va_list a;
va_start(a, n);

if (n == 0)
	return (0);
for (i = 0; i < n; i++)
{
j = va_arg(a, int);
sum += j;
}
va_end(a);
return (sum);
}
