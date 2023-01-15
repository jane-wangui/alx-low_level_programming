#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
  * main - show if number is positive or negative
  * Return: Always 0
  */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d iszero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
