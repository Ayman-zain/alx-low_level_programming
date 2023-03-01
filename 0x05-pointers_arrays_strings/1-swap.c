#include "main.h"

/**
 * swap_int - function that takes a pointer to an int as parameter
 *  and updates the value it points to to 98.
 *  @a: pointor.
 *  @b: pointor.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp
}
