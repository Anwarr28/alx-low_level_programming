#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: a program prints "_putchar"
  * Return: Always 0 (Success)
  */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
