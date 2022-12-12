#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned char a = '0';
	int b;

	for ( b = 0; b < 10; b++)
	{
		putchar(a);
		a++;
	}
	a = '1';
	for ( b = 0; b < 6; b++)
	{
		putchar('0' + a);
		a++;
	}
putchar('\n');
return (0);
}

