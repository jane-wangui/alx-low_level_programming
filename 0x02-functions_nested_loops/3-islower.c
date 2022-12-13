#include "main.h"
/**
 * _islower - check for lower case
 * @c: letter to compare
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
return (0);
}
