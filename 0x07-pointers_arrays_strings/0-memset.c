#include "main.h"

/**
 * *_memset - file memory with a constant byte
 * @s: a pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0; n > 0; p++, n--)
	{
		s[p] = b;
	}
	return (s);
}
