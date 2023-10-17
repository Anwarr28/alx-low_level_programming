#include "main.h"

/**
  * puts2 - prints every ohter character of a string.
  * @str: the string to be printed.
  *
  * Return: Nothing.
  */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (*(str + len))
		len++;
	while (i < len)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
int main(void)
{
	char *str;

	str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\0Holberton";
	puts2(str);
	return (0);
}
