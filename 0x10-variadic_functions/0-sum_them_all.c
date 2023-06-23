#include "variadic_functions.h"
#include<stdarg.h>

/**
 * sum_them_all - Returns the sum of al the parameters
 * @n: The number of parameters passed to the function
 * @....: A variable number of parameters to calculate the sum
 *
 * Return: if n== 0 - 0
 *Otherwise - Sum of all params
 */

int sum_them_all(const unsignes int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
