#include <stdio.h>
int sum_of_multi(int i, int total);

/**
  * main - Entry point
  *
  * Description: print the sum of nums.
  * Return: Always 0 (Success)
  */

int main(void)
{
	int sum;

	sum = sum_of_multi(3, 1024) + sum_of_multi(5, 1024) - sum_of_multi(15, 1024);
	printf("%d\n", sum);
	return (0);
}

/**
  * sum_of_multi - computes the sum of all the multiples
  * 		of 3 or 5 below 1024.
  * @i: the number its multipes will be sum
  * @total: biggest number to begin with
  *
  * Return: sum of all founded numbers under total.
  */


int sum_of_multi(int i, int total)
{
	int sum = 0;

	total -= 1;
	while (total % i != 0)
	{
		total -= 1;
	}
	while (total > 0)
	{
		sum += total;
		total -= i;
	}
	return (sum);
}
