#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main (void)
{
	char x='a', y='A';

	while(x <= 'z')
		putchar(x);
	while(y <= 'Z')
		putchar(y);
	return (0);
}
