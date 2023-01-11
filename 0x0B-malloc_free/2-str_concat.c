#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - conct two strings
 * @s1: string one
 * @s2: string two
 * Return: concatanated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *s3;

	i = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		s3[i + len2] = s2[i];
	}

	s3[i + len1] = '\0';
	return (s3);
}
