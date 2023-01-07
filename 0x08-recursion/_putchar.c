#include <unistd.h>
/**
 * _putchar - writes a character to an stdout
 * @c: character to print
 * Return: 1 on succes, On error -1
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
