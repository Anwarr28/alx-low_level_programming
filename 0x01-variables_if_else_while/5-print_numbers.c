#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print numbers from 1 to 10
  * Return: Always 0 (Success)
  */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
