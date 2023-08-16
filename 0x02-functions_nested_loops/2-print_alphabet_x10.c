#include "main.h"
/**
  *print_alphabet_x10 to print the alphabet ten times
  *using for loop
  */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		putchar('\n');
	}
}
