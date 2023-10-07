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
	char c = 'a', C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
