#include <stdio.h>
int main(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i != j && i < j)
			{
				putchar (48 + i);
				putchar (48 + j);
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;	
		}
		i++;
	}
	return (0);
}
