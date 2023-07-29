#include <stdio.h>

void N1(void) __attribute__ ((constructor));

/**
 * N1 - prints a sentence before the main
 * function is executed
 */
void N1(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
