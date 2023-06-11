#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @base: value to raise
 * @exponent: power
 * Return:value of the base to the power of the exponent
 */
int _pow_recursion(int base, int exponent)
{
	if (exponent < 0)
		return (-1);
	if (exponent == 0)
		return (1);
	return (base * _pow_recursion(base, exponent - 1));
}

