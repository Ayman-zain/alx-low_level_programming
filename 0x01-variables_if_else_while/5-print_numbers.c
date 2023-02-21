#include<stdio.h>

/**
 * main - print single digit numbers
 * Return: Always 0 (success)
 */

int main(void)
{
int digi;

for (digi = 0; digi <= 9; digi++)
	printf("%d", digi);
putchar('\n');
return (0);
}
