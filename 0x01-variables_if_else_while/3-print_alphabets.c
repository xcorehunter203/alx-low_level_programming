#include <stdio.h>

/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
	char x = 'a', y = 'A';

	for (x = 'a'; x <= 'z'; x++)
		printf("%c", x);
	for (y = 'A'; y <= 'Z'; y++)
		printf("%c", y);
	printf("\n");
	return (0);
}
