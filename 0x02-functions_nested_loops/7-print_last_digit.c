#include "main.h"

/**
*print_last_digit - computes the last digit
*@n: takes type of input
*Return: always 0
*/

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = -1 * (n % 10);
	else
		digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}

