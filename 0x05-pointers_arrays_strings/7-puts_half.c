#include "main.h"
/**
 * puts_half - print second half of a string
 * @str: char array string type
 * description: if odd number chars, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		putchar (str[i]);
	}
}

