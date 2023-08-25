#include "main.h"
/**
 *  _strcmp -compares two strings
 *  @s1: string 1
 *  @s2: string 2
 *  Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0, j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
