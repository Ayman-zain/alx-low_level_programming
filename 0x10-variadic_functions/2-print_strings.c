#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - a function that prints numbers, followed by a new line.
 * @separator:the string to be printed between numbers;
 * @n: number of args.
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *j;

va_list a;
va_start(a, n);
for (i = 0; i < n; i++)
{
j = va_arg(a, char *);
if (separator == NULL || i == n - 1)
{
if (j == NULL)
	printf("(nil)");
else
	printf("%s", j);
} else
{
if (j == NULL)
	printf("(nil),%s", separator);
else
	printf("%s%s", j, separator);
}
}
printf("\n");
va_end(a);
}
