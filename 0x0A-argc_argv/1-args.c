#include "main.h"

/**
  * main - Entry point.
  * @argc: the number of arguments.
  * @argv: the names of arguments.
  *
  * Description: pint number of arguments.
  * Return: 0 success.
  */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
