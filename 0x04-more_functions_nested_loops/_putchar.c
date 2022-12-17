#include <unistd.h>
/**
 * _putchar - write character c  to output
 * @c: character to print
 *
 * return: success 1, error -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
