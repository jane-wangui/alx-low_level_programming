#include <unistd.h>
/**
 * _putchar - writes out the character c
 * @c: the character to print
 *
 * Return: on Sucess 1
 * on error, -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
