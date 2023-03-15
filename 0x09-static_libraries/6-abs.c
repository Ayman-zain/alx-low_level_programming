#include "main.h"

/**
 * _abs - return abslute value
 * @r: number to be converted
 * Return: int number
 */

int _abs(int r)
{
int ABS = 0;

if (r < 0)
{
ABS = r * -1;
return (ABS);
}
return (r);
}
