#include "main.h"
/**
* _abs - function that computes the absolute
*         value of an integer
*
*
* @n: takes in integer type input for function
*
* Return: always 0 (success)
*/
int abs(int n)
{
	if (n > 0)
		return (n * -1);
	else
		return (n);
}
