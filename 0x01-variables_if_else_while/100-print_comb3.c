#include <stdio.h>

/**
  * main - Entry point
  *
  * Despription: print the compination of two digits
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n1 = 48, n2;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			putchar(n1);
			if (n2 != n1)
			{
				putchar(n2);
				if (n1 < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
