#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s: String value pointer
 * Retun: value of the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
