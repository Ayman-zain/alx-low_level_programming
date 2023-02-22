#include <stdio.h>
#include "main.h"
/**
 * main - print _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
char message[] = "_putchar";
int SizeOfSTRING = sizeof(message);
int count;

for (count = 0; count < SizeOfSTRING; count++)
{
char i = message[count];
_putchar(i);
}
_putchar('\n');
return (0);
}
