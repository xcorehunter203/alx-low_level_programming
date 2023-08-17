#include "main.h"

/**
*_isalpha - checks if letter is upper or lower
*@c: takes input from other functions
*Return: return 1 if true else 0
*
*/

int _islower(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return 0;
}
