#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - a function that returns the sum of all its parameters.
 *@n: integer
 *Return: sum
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
	sum += va_arg(args, int);

return (sum);
va_end(args);
}
