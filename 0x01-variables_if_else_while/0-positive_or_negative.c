#include <stdlib.h>
#include <time.h>
/**
 * main - start
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>1){
	printf("%d is positive",n);
	} else if (n<0){
	printf("%d is negative",n);
	} else {
	printf("%d is zero",n);
	}
	return (0);
}
