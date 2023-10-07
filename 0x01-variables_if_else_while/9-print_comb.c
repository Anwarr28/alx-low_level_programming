#include <stdio.h>

/**
  * main - Entry point
  *
  * Description:prints all possible combinations of single-digit nums
  * Return: Always 0 (Success)
  */

int main(void)
{
	int c = 48;

	while (c < 58)
	{
		putchar(c);
		if (c < 57)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
