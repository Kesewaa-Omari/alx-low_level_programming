#include "main.h"
#include <stdio.h>


int _sqrt(int n, int i);

/**
 * _sqrt_recursion - computes the non negative square root of n
 * @n: input integer
 * Return: the natural root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 * @n: input number
 * @i: iterate number
 *
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
