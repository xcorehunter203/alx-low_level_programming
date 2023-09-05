#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * initializes it with a specific char.
 * @size: size of array
 * @c: char to be initialized
 *
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	int i = 0;
	if (size == 0 || n == 0)
		return (0);
	while (i < size)
	{
		n[size] == c;
		i++;
	}
	return n;
}
