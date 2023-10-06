#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Description: take the last digit of a number and see if
  *		 it's == 0, < 6 && != 0, > 5
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n, lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;

	if (lastn > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lastn);
	else if (lastn < 6 && != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastn);
	else
		printf("Last digit of %d is %d and is 0\n", n, lastn);

	return (0);
}
