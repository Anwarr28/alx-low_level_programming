#include "main.h"

/**
  * main - Entry point.
  * @argc: the number of arguments.
  * @argv: the names of arguments.
  *
  * Description: prints the minimum number of coins to make change
  *		for an amount of money.
  * Return: 0 success.
  */
int main(int argc, char **argv)
{
	int i, change = 0, coin[] = {25, 10, 5, 2, 1};
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; money != 0; i++)
		{
			change += money / coin[i];
			money = money % coin[i];
		}
		printf("%d\n", change);
	}
	return (0);
}
