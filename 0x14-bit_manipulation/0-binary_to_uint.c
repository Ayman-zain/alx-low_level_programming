#include "main.h"
#include <stdio.h>
/**
 * TwoPow - return 2 to power of p.
 * @p: power of 2
 * Return: int
 */
int TwoPow(int p)
{
	int r = 1;

	if(p == 0)
		return (1);
	while (p--)
		r = r * 2;
return (r);
}
/**
 * binary_to_uint - function that sets the value of a bit to 1 at given index.
 * @b: binary number stored in char array
 * Return: unsigned int.
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
int size = 0, i, pow, dec = 0;
if (b == NULL)
{
	return (0);
}
while (b[size] != '\0')
	size++;
pow = size - 1;
for (i = 0; i < size; i++)
{
	 if ((b[i] != '0') && (b[i] != '1'))
                return(0);
	 else if (b[i] == '1')
		dec = dec + TwoPow(pow);
	pow--;
}
return (dec);
}
