#include <stdio.h>
void print_faboni(unsigned long int max);

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	print_faboni(4000000);
	return (0);
}

/**
  * print_faboni - print sum of even fabonicci nums
  * @max: max numbers
  *
  * Return: return nothing.
  */

void print_faboni(unsigned long int max)
{
	unsigned long int fn, prev1, prev2, total;

	prev2 = 0;
	prev1 = 1;
	while (fn <= max)
	{
		fn = prev1 + prev2;
		if (fn % 2 == 0)
			total += fn;
		prev2 = prev1;
		prev1 = fn;
	}
	printf("%lu\n", total);
}
