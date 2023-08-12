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
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int d = n % 10;
	printf("Last digit of %i \n", n);
	if (d > 5)
		printf("%i and is greater than 5 \n", d);
	else if (d == 0)
		printf("%i and is 0", d);
	else if (d < 6 && d != 0)
		printf("%i and is less than 6 and not 0", d);
	return (0);
}
