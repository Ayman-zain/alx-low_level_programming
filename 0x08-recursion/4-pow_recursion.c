#include "main.h"

/**
 * _pow_recursion - a function that return x raised to the power of y.
 * @x: the number.
 * @y: the power.
 * Return: int of x pow y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
else if (y < 1)
{
	return (1);
}
else
{
	x = x * _pow_recursion(x, y - 1);
}
return (x);
}
