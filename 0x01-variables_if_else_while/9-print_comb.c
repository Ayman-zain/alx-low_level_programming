#include<stdio.h>

/**
 * main - print single digit numbers with putchar
 * Return: Always 0 (success)
 */

int main(void)
{
int digi;

for (digi = 0; digi <= 9; digi++)
{
	putchar('0' + digi);
	if (digi != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
