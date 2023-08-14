#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z' ; x++)
	{
		if (x == 'q' || x == 'e')
			x++;
		else
			putchar(x);
		putchar('\n');
	}
	return (0);
}
