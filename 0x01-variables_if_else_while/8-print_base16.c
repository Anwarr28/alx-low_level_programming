#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print numbers in hexa
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
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
