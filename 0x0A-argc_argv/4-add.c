#include "main.h"

/**
  * main - Entry point.
  * @argc: the number of arguments.
  * @argv: the names of arguments.
  *
  * Description: add positive numbers.
  * Return: 0 success.
  */
int main(int argc, char **argv)
{
	int sum = 0, i, j;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				else
					sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
