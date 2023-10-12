#include "main.h"

/**
  * main - Entry point.
  *
  * Description: FizzBuzz test.
  * Return: Always 0 (Success).
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
