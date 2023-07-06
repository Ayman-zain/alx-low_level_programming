#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: number of fact.
 * Return: factorial
 *
 */
int factorial(int n)
{
if (n <= 1 && n > -1)
	return (n);
else if (n < 0)
	return (-1);
else
n = n *factorial(n - 1);
return (n);
}
