#include "main.h"
#include <stdio.h>

/**
 * main - fuzz buzz test
 * Return: void
 */

void main(void)
{
int i;
int n = 1;

for (i = 1; i <= 100; i++)
{
	if (n % 3 == 0 && n % 5 == 0)
	printf("FizzBuzz ");
	else if (n % 3 == 0)
	printf("Fizz ");
	else if (n % 5 == 0)
	printf("Buzz ");
	else
	printf("%d ", n);
	n++;
}
putchar('\n');
}
