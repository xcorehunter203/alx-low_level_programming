#include "main.h"
/*
 * Checks for uppercase character
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		printf("is upper");
		return (1);
	}
	else
	{
		printf("is lower");
		return (0);
	}
}
