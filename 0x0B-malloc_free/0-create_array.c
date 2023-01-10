#incude "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size of array to create
 * @c: char to initialize
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(car) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;

	return (t);
}