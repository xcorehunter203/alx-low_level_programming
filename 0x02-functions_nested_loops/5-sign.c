#include "main.h"

/**
*print_sign - print + if > 0, print - if < 0, print 0 if = 0
*@n: takes type of input
*Return: 1 if + , 0 and -1 if -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
