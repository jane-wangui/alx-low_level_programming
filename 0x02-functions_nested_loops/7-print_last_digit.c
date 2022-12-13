#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - print the last digit in a number
 * @r: number to check last digit
 * Return: last digit of the number
 */
int print_last_digit(int r)
{
	_putchar('0' + _abs(r % 10));
	return (_abs(r % 10));
}
