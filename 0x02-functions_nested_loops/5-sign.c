#include "main.h"
/**
 * print_sign - print the sign of a character
 * @n: character to check
 * Return: 1 if greater than zero, 0 if its zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
_putchar('-');
return (-1);
}
