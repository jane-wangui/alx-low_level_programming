#include "main.h"
/**
 * swap_int - Swab the value of two integers
 * @a: value to be swapped
 * @b: value to be swapped
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;

	*a = c;
	*b = d;
}
