#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
  *main - main is the entry point
  *Return: return 0 (succsess)
  */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
