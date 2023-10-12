#include "main.h"

/**
  * _isupper - checks for uppercase character.
  * @c: the character to be checked.
  *
  * Return: 1 if th char is upper, 0 othrewise.
  */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
