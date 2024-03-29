#include "main.h"
#include <stdio.h>
/**
 * *_strspn - length of prefix substring
 * @s: string to go through
 * @accept: accept bytesReturn: returns unsigned values
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0'; j++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
			result++;
			break;
		}
	}
	if (s[j] == '\0')
		return (result);
	}
	return (0);
}

