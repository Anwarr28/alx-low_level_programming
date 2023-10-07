#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: print alphabet in lowercase letters except q and e
  * Return: Always 0 (Success)
  */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
