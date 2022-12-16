#include "main.h"
/**
 * print_line - draw a straigt line
 * @n: number of time character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
