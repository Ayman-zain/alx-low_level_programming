#include<stdio.h>

/**
 * main - print hexa numbers with putchar
 * Return: Always 0 (success)
 */

int main(void)
{
int digi;
char ch;

for (digi = 0; digi <= 9; digi++)
	putchar('0' + digi);
for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
