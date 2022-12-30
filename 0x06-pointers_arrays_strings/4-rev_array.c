#include "main.h"
/**
 * reverse_array - function to reverse an arrray
 * @a: array to reverse
 * @n: size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
	return (0);
}
