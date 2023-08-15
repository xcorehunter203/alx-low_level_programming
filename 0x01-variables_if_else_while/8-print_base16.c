#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
	int i = 0;
	char c = 'a';

	for (i = 0; i < 10; i++)
		putchar(48 + i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
return (0);
}
