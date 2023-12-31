#include "main.h"

/**
 * _pow_recursion - Computes the power of a number.
 *
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y,
 *         or -1 if the exponent is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
