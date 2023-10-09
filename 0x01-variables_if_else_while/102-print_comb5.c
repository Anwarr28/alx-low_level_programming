#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: prints all possible different combinations .
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n1, n2;

	n1 = 0;
	while (n1 < 100)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			putchar(n1 / 10 + 48);
			putchar(n1 % 10 + 48);
			putchar(' ');
			putchar(n2 / 10 + 48);
			putchar(n2 % 10 + 48);
			if (n1 != 98 ||  n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
