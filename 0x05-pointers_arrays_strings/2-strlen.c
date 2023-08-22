#include "main.h"

/**
 * _strlen - returns the length of the string
 *
 * @s: string parameter input
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	for (i = 0; s != '\0'; i++)
		length++;
	return (length);
}
