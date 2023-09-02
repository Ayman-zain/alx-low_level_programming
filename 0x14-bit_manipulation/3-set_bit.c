#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number given.
 * @index: the index
 * Return:  value of the bit at index or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = ((1UL << index) | *n);
		return (1);

}
