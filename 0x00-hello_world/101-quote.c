#include <stdio.h>

/**
  * main - Entry point
  *
  *Description: print a quote using putchar
  *Return: 1 to standard error
  */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; quote[i] != '\0'; i++)
	{
		putchar(quote[i]);
	}
	putchar('\n');
	return (1);
}
