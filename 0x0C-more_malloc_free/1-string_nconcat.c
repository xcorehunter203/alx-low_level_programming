#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to be appended
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

