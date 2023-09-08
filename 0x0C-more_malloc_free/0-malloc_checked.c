#include "main.h"

/**
 * *malloc_checked -allocates memory using malloc
 * @b: size of memory
 *
 * Return: pointer to the allocated memory (SUCCESS), 98 (FAIL)
 */
void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);
	if (c == 0)
		exit (98);
	return (c);
}
