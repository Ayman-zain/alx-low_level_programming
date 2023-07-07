#include "main.h"

/**
 * iter - a function that iter from 2 to number/2.
 * @m: current value a test.
 * @n: The number.
 * Return: etiher 0 or 1.
 */
int iter(int n, int m)
{
if (m == n / 2)
	return (1);
if (n % m == 0)
	return (0);
else
	return (iter(n, m + 1));
}

/**
 * is_prime_number - a function that returns the natural square root of n.
 * @n: The number.
 * Return: either 0 or 1.
 */

int is_prime_number(int n)
{
if (n == 1)
	return (0);
else if (n < 0)
	return (0);
else
	return (iter(n, 2));

}
