#include "main.h"
/**
 * puts_half - print second half of a string
 * @str: char array string type
 * description: if odd number chars, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	for (j = i / 2; str[j] != '\0'; j++)
	{
		_putchar (str[j]);
	}
	_putchar('\n');
}