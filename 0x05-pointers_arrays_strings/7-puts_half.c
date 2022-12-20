#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - print second half of a string
 * @str: string to be printe
 * Return: void
 */
void puts_half(char *str)
{
	int y;
	int x;

	if (_strlen(str) % 2 != 0)
	{
		x += 1;
	}
	for (y = (_strlen(str) + x) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

