#include "main.h"

/**
  * print_alphabet - utilize on the _putchar function to print
  *the alphabet a - z
  */

void print_alphabet(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}
