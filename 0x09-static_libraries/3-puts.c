#include "main.h"
#include "2-strlen.c"
#include "_putchar.c"
/**
 * _puts - print a string
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
