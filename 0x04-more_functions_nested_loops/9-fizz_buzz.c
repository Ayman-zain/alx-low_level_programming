#include "main.h"
#include <stdio.h>

/**
 * main - fuzz buzz test
 * Return: void
 */

void main(void)
{
int i;
int n = 0;

for (i = 0; i <= 100; i++)
{
	if (n % 3 == 0)
	printf("Fizz ");
	else if (n % 5 == 0)
	printf("Buzz ");
	else if (n % 3 == 0 && n % 5 == 0)
	printf("FizzBuzz ");
	else
	printf("%d ", n);
	n++;
}
putchar(' ');
}
