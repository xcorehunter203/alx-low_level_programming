#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicates a string.
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int i, size;
	char m;
	
	if (*str == NULL)
		return (NULL);	
	for (; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)i
		return (NULL);
	else
	{
		for (; i < size; i++)
			str[i] = m[i];
	}
	return (m);
}
