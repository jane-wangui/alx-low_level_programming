#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The strng to measure
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int lenOfString = 0;

	if (*s)
	{
		lenOfString++;
		lenOfString += _strlen_recursion(s + 1);
	}

	return (lenOfString);
}
