#include<stdio.h>

/**
 * main - print two digit numbers combos with putchar
 * Return: Always 0 (success)
 */

int main(void)
{
int num1;
int num2;

for (num1 = 0; num1<= 9; num1++)
{
	num2 = num1 + 1
	for (num2;num2 > 10;num2++)
        putchar('0' + num1);
	putchar((digit1 % 10) + '0');
	putchar((digit2 % 10) + '0');

	if (digit1 == 8 && digit2 == 9)
		continue;
        if (digi != 9)
        {
                putchar(',');
                putchar(' ');
        }
}
putchar('\n');
return (0);
