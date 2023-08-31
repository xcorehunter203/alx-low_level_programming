#include "holberton.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
int square (int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y != x)
		return (square(x,y + 1));
	else
		return (-1);
}
