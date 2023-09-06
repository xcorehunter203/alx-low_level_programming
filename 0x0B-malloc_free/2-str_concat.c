#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *s3;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	s3 = malloc((len1 + len2) * sizeof(char));
	for (i = 0; s1[i] != 0; i++)
		s3[i] = s1[i];
	while (i < (len1 + len2))
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3 = '\0';
	return (s3);
}
