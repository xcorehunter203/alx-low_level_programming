#include <stdio.h>
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	return (0);
}
