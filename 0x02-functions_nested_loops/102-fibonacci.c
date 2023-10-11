#include <stdio.h>
void print_faboni(int rpt);

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	print_faboni(50);
	return (0);
}

/**
  * print_faboni - print prints the first 50 Fibonacci numbers
  * @rpt: time of repetition (how many number to print).
  *
  * Return: return nothing.
  */

void print_faboni(int rpt)
{
	int i, prev1, prev2;
	unsigned int fn;

	prev2 = 0;
	prev1 = 1;
	for (i = 0; i < rpt; i++)
	{
		fn = prev1 + prev2;
		if (fn != 0)
		{
			if (i == rpt)
				printf("%u\n", fn);
			else
				printf("%u, ", fn);
		}
		prev2 = prev1;
		prev1 = fn;
	}
}
