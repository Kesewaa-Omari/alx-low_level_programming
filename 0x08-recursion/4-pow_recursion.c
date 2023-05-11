#include "main.h"

/**
 * _pow_recursions - computes x raised to the power y
 * @x: number to be raised
 * @y: the power
 * Return: the value of x raised to the power y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

