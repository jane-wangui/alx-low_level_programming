#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - print the reverse of a string
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int n;

	n = 0;

	while (s[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
