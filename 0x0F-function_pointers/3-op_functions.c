#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of integers
 * @a: input first integer
 * @b: input second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - difference of integers
 * @a: input first integer
 * @b: input second integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - product of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a by b.
 */

int op_div(int a, int b)
{
/*make provision for integer value for b @ 0*/
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
	}

/**
 * op_mod - remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
