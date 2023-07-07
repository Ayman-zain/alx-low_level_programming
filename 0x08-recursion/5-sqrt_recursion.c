#include "main.h"

/**
 * iter - a function that iter from 0 to square/2.
 * @m: current value a test.
 * @n: The square.
 * Return: square.
 */
int iter(int n, int m)
{
if (m > n / 2)
	return (-1);
else if (m * m == n)
	return (m);
else
	return (iter(n, m + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root of n.
 * @n: The square.
 * Return: the square.
 */

int _sqrt_recursion(int n)
{
if (n < 2 && n > -1)
{
	return (n);
}
else
{
if (n < 0)
	return (-1);
else
	return (iter(n, 0));
}
}
