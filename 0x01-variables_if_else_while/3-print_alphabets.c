#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
	char x = 'a', y = 'A';
	for (x = 'a'; x <= 'z'; x++)
		printf("%i", x);
	for (y = 'A'; y <= 'Z'; y++)
		printf("%i", y);
	return (0);
}
