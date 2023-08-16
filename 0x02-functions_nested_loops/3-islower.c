#include "main.h"

/**
*_islower - fn checks if character is lower
*@c: checks input of character
*Return: return 1 if c is lower otherwise return 0 (success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
