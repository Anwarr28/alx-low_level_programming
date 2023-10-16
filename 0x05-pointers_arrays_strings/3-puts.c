#include "main.h"

/**
  * _puts - prints a string followed be a new line.
  * @str: the string to be printed.
  *
  * Return: nothing.
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
