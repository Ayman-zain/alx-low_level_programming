#include "main.h"
/**
 * binary_to_uint - a function that converts binary number to an unsigned int.
 * @b: string that contain number in binary
 * Return: Decimal number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int d = 0;

if (!b)
	return (0);

for (i = 0; b[i]; i++)
{
	if (b[i] < '0' || b[i] > '1')
		return (0);
	d = 2 * d + (b[i] - '0');
}

	return (d);

}
