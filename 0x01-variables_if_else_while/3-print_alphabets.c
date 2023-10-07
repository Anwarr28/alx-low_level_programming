#include <stdio.h>

/**
  * main - Entry point
  *
  * Desription: Program that prints the alphabet in lowercase,
  *		and then in uppercase.
  * Return: Always 0 (Success)
  */

int main(void)
{
	char c = 'A';

	while (c <= 'z')
	{
		putchar(c);

		if (c == 'Z')
			c += 6;
		c++;
	}
	putchar('\n');
	return (0);
}
