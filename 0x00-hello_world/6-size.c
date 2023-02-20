#include <stdio.h>
/**
 * main - start
 * Return: Always 0 (success)
 */
int main(void)
{
int intType;
float floatType;
long long int doublelongType;
long int longType;
char charType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of a int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(doublelongType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
