#include "main.h"

/**
  * main - Entry point
  *
  * Description: find and print the largest prime number
  * of the number 612852475143.
  * Return: always 0 (success).
  */

int main(void)
{
	unsigned long int i, num;

	num = 612852475143;
	i = 3;
	while (i < num)
	{
		if (num % i == 0)
			num /= i;
		i++;
	}
	printf("%lu\n", num);
	return (0);
}
