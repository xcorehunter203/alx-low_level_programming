#include "main.h"

/**
 * *_strchr - file memory with a constant byte
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (s + p);
	}
	return ('\0');
}
