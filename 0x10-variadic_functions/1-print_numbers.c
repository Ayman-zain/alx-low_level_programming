#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator:the string to be printed between numbers;
 * @n: number of args.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, j;

va_list a;
va_start(a, n);
for (i = 0; i < n; i++)
{
j = va_arg(a, int);
if (separator == NULL || i == n - 1)
	printf("%d", j);
else
	printf("%d%s", j, separator);
}
printf("\n");
va_end(a);
}
