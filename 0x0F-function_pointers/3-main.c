#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point.
  * @argc: the number of argument should always be 3.
  * @argv: the arguments given by the user
  *		should be two numbers with any of (+,-,/,%,*) in between.
  *
  * Description: perform one of the choosen operations on two given numbers
  * Return: if success 0. exit otherwise.
  */
int main(int argc, char **argv)
{
	int num1, num2, calc;
	char *operator = NULL;
	op_t chs;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	chs.f = get_op_func(operator);
	if (chs.f == NULL)
	{
		puts("Error");
		exit(99);
	}
	if (num2 == 0 && (chs.f  == op_div || chs.f == op_mod))
	{
		puts("Error");
		exit(100);
	}
	calc = chs.f(num1, num2);
	printf("%d\n", calc);

	return (0);
}
