#include "main.h"

/**
  * main - Entry point.
  * @argc: the number of arguments.
  * @argv: the names of arguments.
  *
  * Description: multiply two numbers.
  * Return: 0 success or 1 otherwise.
  */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
