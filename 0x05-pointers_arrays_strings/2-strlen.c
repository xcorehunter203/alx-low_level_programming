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
	int counter = 0;

	for (counter = 0; s != '\0'; s++)
		counter++;
	return (counter);
}
