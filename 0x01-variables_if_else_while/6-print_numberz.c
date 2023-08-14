#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
	int i = 1;

	while (i <= 9)
	{
		putchar(48 + i);
		i++;
	}
	return (0);
}
